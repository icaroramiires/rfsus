package br.edu.ifba.rfsus.ui;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import br.edu.ifba.rfsus.IConsulta;
import br.edu.ifba.rfsus.bd.FachadaPaciente;
import br.edu.ifba.rfsus.bean.Paciente;
import br.edu.ifba.rfsus.bean.Sensores;

// TODO mudar de Leitura Para consulta
public class Consulta extends LeituraUI implements IConsulta {
	Sensores sensores = new Sensores();
	@Override
	public void exibir() {
		pack();
		setVisible(true);
		btnLeitura.setEnabled(false);
		btnLeitura.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent e) {
				jlblLeituraCardiaca.setText(sensores.getBpm()+"");
				jlblLeituraTemp.setText(sensores.getTemp()+"");
				jlblPressaoS.setText(sensores.getPressaoS()+"");
				jlblPressaoD.setText(sensores.getPressaoD()+"");
			}
		});
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
		this.sensores.setBpm(sensores.getBpm());
		this.sensores.setTemp(sensores.getTemp());
		this.sensores.setPressaoS(sensores.getPressaoS());
		this.sensores.setPressaoD(sensores.getPressaoD());
	}
}
