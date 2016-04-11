package br.edu.ifba.rfsus.jna.rfid;

import br.edu.ifba.rfsus.IIdentificacao;

public class LeitorRfid implements Runnable {

	private IIdentificacao identificacao = null;

	private boolean continuar = true;
	private String porta = null;

	public LeitorRfid(String porta, IIdentificacao identificacao) {
		this.porta = porta;
		this.identificacao = identificacao;
	}

	@Override
	public void run() {
		continuar = true;

		IRfid rfid = FabricaRfid.getInstancia();
		rfid.iniciar(porta);

		while (continuar) {
			String id = rfid.ler();

			if (id != null) {
				identificacao.setRfid(id);
			}

			try {
				Thread.sleep(500);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}

		rfid.finalizar();
	}

	public void parar() {
		continuar = false;
	}

}
