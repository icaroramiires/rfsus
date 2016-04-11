package br.edu.ifba.rfsus;

import br.edu.ifba.rfsus.bd.FachadaBD;
import br.edu.ifba.rfsus.jna.rfid.LeitorRfid;
import br.edu.ifba.rfsus.jna.rfid.LeitorRfidAtendimento;
import br.edu.ifba.rfsus.jna.rfid.LeitorRfidConsulta;
import br.edu.ifba.rfsus.ui.Atendimento;
import br.edu.ifba.rfsus.ui.Consulta;
import br.edu.ifba.rfsus.ui.ConsultaUI;
import br.edu.ifba.rfsus.ui.Identificacao;

public class Executor {

	private static final String PORTA_RFID = "/dev/ttyACM1";

	public static void main(String[] args) throws InterruptedException {
		FachadaBD.getInstancia().configAll("localhost", 27017, "rfsus", "admin", "root");

		Identificacao identificacao = new Identificacao();
		identificacao.exibir();
		Thread.sleep(5000);
		identificacao.darEntrada();

		LeitorRfid leitor = new LeitorRfid(PORTA_RFID, identificacao);
		Thread tLeitor = new Thread(leitor);
		tLeitor.start();
				
	}

}
