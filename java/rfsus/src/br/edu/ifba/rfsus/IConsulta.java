package br.edu.ifba.rfsus;

import br.edu.ifba.rfsus.bean.Paciente;

public interface IConsulta {
	// Passos para identificacao por RFID:

	// 1. exibir interface grafica
	public void exibir();

	// 2. capturar e exibir o RFID
	public void setRfid(String rfid);
	/*
	 *  isenrir interface de sensores	
	 */
	
	public void pesquisarPorRfid(String rfid);

	// 4. apos retorna o paciente, deve exibir os dados dele para conferencia
	public void setDadosPaciente(Paciente paciente);
	
	public void atendimento();
}
