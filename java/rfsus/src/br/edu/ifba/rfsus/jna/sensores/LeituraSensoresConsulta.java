package br.edu.ifba.rfsus.jna.sensores;

import br.edu.ifba.rfsus.IConsulta;
import br.edu.ifba.rfsus.bean.Sensores;
import br.edu.ifba.rfsus.jna.rfid.FabricaRfid;
import br.edu.ifba.rfsus.jna.rfid.IRfid;

/* Esta Classe é responsavel por realizar a leitura dos sensores de batimento, temperatura e batimentos no modulo de consulta */ 

public class LeituraSensoresConsulta implements Runnable {
	private IConsulta consulta = null;
	private boolean continuar = false;
	private String porta = null;

	public LeituraSensoresConsulta(String porta, IConsulta consulta) {
		this.porta = porta;
		this.consulta = consulta;
	}

	@Override
	public void run() {
		Sensores sensores = new Sensores();
		continuar = true;
		ISensores dadosSensores = FabricaSensores.getInstancia();
		dadosSensores.iniciar(porta);
		while (continuar) {
			int resultado = dadosSensores.ler();
			if (resultado == 0) {	
				sensores.setBpm(dadosSensores.getBpm());
				sensores.setTemp(dadosSensores.getTemp());
				sensores.setPressaoS(dadosSensores.getPressaoS());
				sensores.setPressaoD(dadosSensores.getPressaoD());
				consulta.setSensores(sensores);
			}
			try {
				Thread.sleep(500);
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
