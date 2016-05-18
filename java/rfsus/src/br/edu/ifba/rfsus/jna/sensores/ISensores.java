package br.edu.ifba.rfsus.jna.sensores;

import com.sun.jna.Library;

/* Esta interface descreve a definição dos metodos presentes na biblioteca sensores.so */

public interface ISensores extends Library {
	
	public int iniciar(String porta);
	public int ler();
	public int getTemp();
	public int getBpm();
	public int getPressaoS();
	public int getPressaoD();
	public int finalizar();

}
