package br.edu.ifba.rfsus.jna.rfid;

import br.edu.ifba.rfsus.IAtendimento;

/* Esta Classe é responsavel por realizar a leitura das tags RFID no modulo de Atendimento */ 

public class LeitorRfidAtendimento implements Runnable {
	private IAtendimento identificacao = null;
	private boolean continuar = true;
	private String porta = null;

	public LeitorRfidAtendimento(String porta, IAtendimento identificacao) {
		this.porta = porta;
		this.identificacao = identificacao;
	}

	@Override
	public void run() {
		continuar = true;
		
		IRfid rfid = FabricaRfid.getInstancia();
		try {
			Thread.sleep(2000);
		} catch (InterruptedException e1) {
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
		rfid.iniciar(porta);
		while (continuar) {
			int resultado = rfid.ler(); // convenção de c/c++ se for zero é sucesso
			
			if (resultado == 0) {
				identificacao.setRfid(rfid.getUid());
			}
			try {
				Thread.sleep(20);
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
		rfid.finalizar();
	}

	public void parar() {
		continuar = false;
	}
}
