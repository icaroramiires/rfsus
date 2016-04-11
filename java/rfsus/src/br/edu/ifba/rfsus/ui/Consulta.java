package br.edu.ifba.rfsus.ui;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.DefaultListModel;
import javax.swing.JList;

import br.edu.ifba.rfsus.IConsulta;
import br.edu.ifba.rfsus.bd.FachadaPaciente;
import br.edu.ifba.rfsus.bean.Paciente;
import br.edu.ifba.rfsus.jna.rfid.LeitorRfidAtendimento;

public class Consulta extends ConsultaUI implements IConsulta, ActionListener {

	private static final String PORTA_RFID = "/dev/ttyACM0";
	
	@Override
	public void exibir() {
		pack();
		setVisible(true);
	}

	@Override
	public void setRfid(String rfid) {
		this.jlblId.setText(rfid);

		pesquisarPorRfid(rfid);
	}

	@Override
	public void pesquisarPorRfid(String rfid) {
		System.out.println("Pesquisando pelo RFID...");

		// TODO adicionar pesquisa no banco de dados
		Paciente paciente = FachadaPaciente.getInstancia().getPacienteById(rfid);
		this.setDadosPaciente(paciente);
	}

	@Override
	public void setDadosPaciente(Paciente paciente) {
		this.jlblRg.setText(paciente.getRg());
		this.jlblAltura.setText(paciente.getAltura().toString());
		this.jlblNome.setText(paciente.getNome());
		this.jlblDataNasc.setText(paciente.getDataNascimento().toString());
		this.jlblPeso.setText(paciente.getPeso().toString());
		
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		Atendimento atendimento = new Atendimento();
		atendimento.exibir();
		LeitorRfidAtendimento leitorAtendimento = new LeitorRfidAtendimento(PORTA_RFID, atendimento);
		Thread tLeitorAtendimento = new Thread(leitorAtendimento);
		tLeitorAtendimento.start();
		leitorAtendimento.parar();
		
	}
	
	@Override
	public void atendimento() {
		jbtnAtendimento.addActionListener(this);
	}

	
}
