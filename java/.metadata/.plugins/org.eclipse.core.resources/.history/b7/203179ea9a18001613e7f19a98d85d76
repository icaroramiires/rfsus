package br.edu.ifba.rfsus.ui;

import br.edu.ifba.rfsus.IConsulta;
import br.edu.ifba.rfsus.bd.FachadaPaciente;
import br.edu.ifba.rfsus.bean.Paciente;

@SuppressWarnings("serial")
public class Consulta extends ConsultaUI implements IConsulta {
	
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
	public void atendimento() {
		//jbtnAtendimento.addActionListener(this);
	}	
}
