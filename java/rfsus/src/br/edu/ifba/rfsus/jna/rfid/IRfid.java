package br.edu.ifba.rfsus.jna.rfid;

import com.sun.jna.Library;

public interface IRfid extends Library {
		
	public int iniciar(String porta);
	public String ler();
	public int finalizar();

}
