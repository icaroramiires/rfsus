package br.edu.ifba.rfsus.jna.sensores;

import br.edu.ifba.rfsus.ILeitura;

public class LeituraSensoresConsulta implements Runnable {
	private ILeitura sensores = null;
	private boolean continuar = false;
	private String porta = null;

	public LeituraSensoresConsulta(String porta, ILeitura sensores) {
		this.porta = porta;
		this.sensores = sensores;
	}

	@Override
	public void run() {
		continuar = true;
		ISensores dadosSensores = FabricaSensores.getInstancia();
		dadosSensores.iniciar(porta);
		while (continuar) {
			int resultado = dadosSensores.ler();
			if (resultado == 0) {	
				sensores.setTemp(dadosSensores.getTemp());
				sensores.setBpm(dadosSensores.getBpm());
				sensores.setPressaoS(dadosSensores.getPressaoS());
				sensores.setPressaoD(dadosSensores.getPressaoD());
			}
			try {
				Thread.sleep(20);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
		dadosSensores.finalizar();
	}
	public void parar() {
		continuar = false;
	}
}
