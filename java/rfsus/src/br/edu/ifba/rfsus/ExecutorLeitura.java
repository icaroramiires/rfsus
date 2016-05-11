package br.edu.ifba.rfsus;

import br.edu.ifba.rfsus.bd.FachadaBD;
import br.edu.ifba.rfsus.jna.rfid.LeitorRfidConsulta;
import br.edu.ifba.rfsus.jna.sensores.LeituraSensoresConsulta;
import br.edu.ifba.rfsus.ui.Consulta;
import br.edu.ifba.rfsus.ui.Leitura;

public class ExecutorLeitura {

	private static final String PORTA_RFID = "/dev/ttyUSB0";

	public static void main(String[] args) throws InterruptedException {
		FachadaBD.getInstancia().configAll("localhost", 27017, "rfsus", "admin", "root");

		ILeitura leitura = new Leitura();
		
		LeituraSensoresConsulta leitorSensores = new LeituraSensoresConsulta(PORTA_RFID, leitura);
		Thread tLeitor = new Thread(leitorSensores);
		tLeitor.start();
		
		leitura.exibir();
		
		
				
	}

}
