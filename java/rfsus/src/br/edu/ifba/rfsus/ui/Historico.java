package br.edu.ifba.rfsus.ui;

import br.edu.ifba.rfsus.IHistorico;
import br.edu.ifba.rfsus.bd.FachadaBD;
import br.edu.ifba.rfsus.bean.Paciente;

@SuppressWarnings("serial")
/* Esta tela compõe a interface grafica Consulta */

public class Historico extends ConsultaUI implements IHistorico {
	
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
		Paciente paciente = FachadaBD.getInstancia().getPacienteById(rfid);
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
}
