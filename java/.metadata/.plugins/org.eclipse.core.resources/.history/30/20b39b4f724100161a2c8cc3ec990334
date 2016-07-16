package br.edu.ifba.rfsus;

import br.edu.ifba.rfsus.bd.FachadaBD;
import br.edu.ifba.rfsus.jna.rfid.LeitorRfidHistorico;

import br.edu.ifba.rfsus.ui.Historico;

public class ExecutorHistorico {

	private static final String PORTA_RFID = "/dev/ttyUSB0";

	public static void main(String[] args) throws InterruptedException {
		FachadaBD.getInstancia().configAll("localhost", 27017, "rfsus", "admin", "root");

		IHistorico historico = new Historico();
		
		LeitorRfidHistorico leitor = new LeitorRfidHistorico(PORTA_RFID, historico);
		Thread tLeitor = new Thread(leitor);
		tLeitor.start();
		
		historico.exibir();
		
		
				
	}

}
