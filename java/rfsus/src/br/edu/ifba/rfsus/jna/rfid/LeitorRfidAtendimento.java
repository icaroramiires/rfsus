package br.edu.ifba.rfsus.jna.rfid;

import br.edu.ifba.rfsus.IAtendimento;
import br.edu.ifba.rfsus.IConsulta;
import br.edu.ifba.rfsus.ui.Consulta;

public class LeitorRfidAtendimento implements Runnable {
	private IAtendimento atendimento = null;
	private boolean continuar = true;
	private String porta = null;

	public LeitorRfidAtendimento(String porta, IAtendimento atendimento) {
		this.porta = porta;
		this.atendimento = atendimento;
	}

	@Override
	public void run() {
		continuar = true;

		IRfid rfid = FabricaRfid.getInstancia();
		rfid.iniciar(porta);
		while (continuar) {
			int id = rfid.ler();
			if(id != 0){
				atendimento.setRfid(rfid.getUid());
			}
			try {
				Thread.sleep(500);
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
		rfid.finalizar();
	}
	public void parar(){
		continuar = false;
	}
}
