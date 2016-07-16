package br.edu.ifba.rfsus;

import br.edu.ifba.rfsus.bd.FachadaBD;
import br.edu.ifba.rfsus.jna.rfid.LeitorRfidAtendimento;
import br.edu.ifba.rfsus.ui.Atendimento;

public class ExecutorAtendimento {

	private static final String PORTA_RFID = "/dev/ttyUSB0";

	public static void main(String[] args) throws InterruptedException {
		FachadaBD.getInstancia().configAll("localhost", 27017, "rfsus", "admin", "root");

		IAtendimento atendimento = new Atendimento();

		LeitorRfidAtendimento leitor = new LeitorRfidAtendimento(PORTA_RFID, atendimento);
		Thread tLeitor = new Thread(leitor);
		tLeitor.start();
		
		atendimento.exibir();
				
	}

}
