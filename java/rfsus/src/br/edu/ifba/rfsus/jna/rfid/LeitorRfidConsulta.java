package br.edu.ifba.rfsus.jna.rfid;

import br.edu.ifba.rfsus.IConsulta;
import br.edu.ifba.rfsus.ui.Consulta;

public class LeitorRfidConsulta implements Runnable {
	private IConsulta consulta = null;
	private boolean continuar = false;
	private String porta = null;
	
	public LeitorRfidConsulta(String porta, IConsulta consulta) {
		this.porta = porta;
		this.consulta = consulta;
	}

	@Override
	public void run() {
		continuar = true;
		IRfid rfid = FabricaRfid.getInstancia();
		rfid.iniciar(porta);
		while (continuar) {
			int id = rfid.ler();
			if(id != 0){
				consulta.setRfid(rfid.getUid());
			}
			try {
				Thread.sleep(500);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
		rfid.finalizar();
	}

	public void parar(){
		continuar = false;
	}
}
