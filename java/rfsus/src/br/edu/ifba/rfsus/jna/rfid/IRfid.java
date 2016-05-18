package br.edu.ifba.rfsus.jna.rfid;

import com.sun.jna.Library;

/* Esta interface descreve a definição dos metodos presentes na biblioteca rfid.so */

public interface IRfid extends Library {
		
	public int iniciar(String porta);
	public int ler();
	public String getUid();
	public int finalizar();

}
