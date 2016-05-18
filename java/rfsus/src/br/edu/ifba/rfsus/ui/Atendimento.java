package br.edu.ifba.rfsus.ui;

import javax.swing.DefaultListModel;

import br.edu.ifba.rfsus.IAtendimento;
import br.edu.ifba.rfsus.bd.FachadaPaciente;
import br.edu.ifba.rfsus.bean.Paciente;

@SuppressWarnings("serial")

/* Esta interface define os metodos de que compõe a interface grafica Consulta */

public class Atendimento extends AtendimentoUI implements IAtendimento {

	@Override
	public void exibir() {
		pack();
		setVisible(true);
	}

	@Override
	public void setRfid(String rfid) {
		this.tfIdentificacao.setText(rfid);
		pesquisarPorRfid(rfid);
	}

	@Override
	public void pesquisarPorRfid(String rfid) {
		Paciente paciente = FachadaPaciente.getInstancia().getPacienteById(rfid);
		this.setDadosPaciente(paciente);
	}

	@Override
	public void setDadosPaciente(Paciente paciente) {
		this.lblRG.setText(paciente.getRg());
		this.lblNome.setText(paciente.getNome());
		this.lblDataNasc.setText(paciente.getDataNascimento().toString());
		DefaultListModel<String> info = new DefaultListModel<>();
		for(String x : paciente.getObservacoes()){
			info.addElement(x);
		}
		this.jlObservacoes.setModel(info);
	}
}
