package br.edu.ifba.rfsus.jna.rfid;

import br.edu.ifba.rfsus.IHistorico;

/* Esta Classe é responsavel por realizar a leitura das tags RFID no modulo de Atendimento */ 

public class LeitorRfidHistorico implements Runnable {
	private IHistorico historico = null;
	private boolean continuar = false;
	private String porta = null;
	
	public LeitorRfidHistorico(String porta, IHistorico historico) {
		this.porta = porta;
		this.historico = historico;
	}

	@Override
	public void run() {
		continuar = true;
		IRfid rfid = FabricaRfid.getInstancia(); 
		rfid.iniciar(porta);
		while (continuar) {
			int resultado = rfid.ler(); // convencao c/c++ se for zero sucesso
			if(resultado == 0){
				historico.setRfid(rfid.getUid());
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