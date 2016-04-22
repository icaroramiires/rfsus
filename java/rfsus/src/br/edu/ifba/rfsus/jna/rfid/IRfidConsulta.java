package br.edu.ifba.rfsus.jna.rfid;

import com.sun.jna.Library;

public interface IRfidConsulta extends Library {
	public int iniciar(String porta);

	public int ler();
	
	public String getUid();
	
	public int getTemp();
	
	public int getBmp();
	
	// pressão arterial 

	public int finalizar();
}
