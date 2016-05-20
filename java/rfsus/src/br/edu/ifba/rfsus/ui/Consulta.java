package br.edu.ifba.rfsus.ui;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import br.edu.ifba.rfsus.IConsulta;
import br.edu.ifba.rfsus.bd.FachadaPaciente;
import br.edu.ifba.rfsus.bean.Paciente;
import br.edu.ifba.rfsus.bean.Sensores;
import br.edu.ifba.rfsus.jna.rfid.LeitorRfidAtendimento;
import br.edu.ifba.rfsus.jna.sensores.LeituraSensoresConsulta;

// TODO mudar de Leitura Para consulta
public class Consulta extends LeituraUI implements IConsulta {
	private static final String PORTA_SENSORES = "/dev/ttyUSB0";
	private static final String PORTA_RFID = "/dev/ttyUSB1";
	private Sensores sensores = new Sensores();
	private LeituraSensoresConsulta leitorSensores;
	private LeitorRfidAtendimento leitorRfid;
	// atributo rfid mandar pro banco

	public Consulta() {
		leitorSensores = new LeituraSensoresConsulta(PORTA_SENSORES, this);
		leitorRfid = new LeitorRfidAtendimento(PORTA_RFID, this);
		
		btnLeitura.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				leitorRfid.parar();
				try {
					Thread.sleep(1000);
				} catch (InterruptedException e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}
				btnLeitura.setEnabled(false);
				jbtnSalvar.setEnabled(true);
				iniciarLeitorSensores();
			}
		});
		
		jbtnSalvar.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent e) {
				// para a trhead de leitura
				// grava no banco 
				//habilita a thread de rfid

			}
		});
	}

	@Override
	public void exibir() {
		pack();
		setVisible(true);
		iniciarLeitorRfid();
		btnLeitura.setEnabled(false);
		jbtnSalvar.setEnabled(false);
	}

	private void iniciarLeitorRfid() {
		Thread tLeitorAtendimento = new Thread(leitorRfid);
		tLeitorAtendimento.start();
	}
	
	private void iniciarLeitorSensores() {
		Thread tLeitorSensores = new Thread(leitorSensores);
		tLeitorSensores.start();
	}
	
	@Override
	public void setRfid(String rfid) {
		pesquisarPorRfid(rfid);
	}

	@Override
	public void pesquisarPorRfid(String rfid) {
		Paciente paciente = FachadaPaciente.getInstancia().getPacienteById(rfid);
		setDadosPaciente(paciente);
		btnLeitura.setEnabled(true);
	}

	@Override
	public void setDadosPaciente(Paciente paciente) {
		jlblNome.setText(paciente.getNome());
	}

	@Override
	public void setSensores(Sensores sensores) {
		this.sensores = sensores;
		atualizarVizualizacaoSensores();
		// add list sensores
	}

	private void atualizarVizualizacaoSensores() {

		jlblLeituraCardiaca.setText(sensores.getBpm() + "");
		jlblLeituraTemp.setText(sensores.getTemp() + "");
		jlblPressaoS.setText(sensores.getPressaoS() + "");
		jlblPressaoD.setText(sensores.getPressaoD() + "");
		// TODO adicionar rotina de gravação no banco de dados
	}
	
}
