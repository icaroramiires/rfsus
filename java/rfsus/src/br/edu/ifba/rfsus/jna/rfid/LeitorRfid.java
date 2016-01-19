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
		rfid._Z7iniciarPc(porta);

		while (continuar) {
			String id = rfid._Z3lerv();

			if (id != null) {
				identificacao.setRFID(id);
			}

			try {
				Thread.sleep(500);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}

		rfid._Z9finalizarv();
	}

	public void parar() {
		continuar = false;
	}

}