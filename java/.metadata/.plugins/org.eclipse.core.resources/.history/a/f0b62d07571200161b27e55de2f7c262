package br.edu.ifba.rfsus.jna.rfid;

import com.sun.jna.Native;
import com.sun.jna.Platform;

public class FabricaRfid {
	
	public static final String MODULO_ATENDIMENTO = "Recepcao";
	public static final String MODULO_CONSULTA = "Consulta";

	public static IRfid getInstancia(String modulo) {
		IRfid rfid = null;

		if (Platform.isLinux()) {
			rfid = (IRfid) Native.loadLibrary("rfid" + ".so", IRfid.class);
		} else if (Platform.isWindows()) {
			rfid = (IRfid) Native.loadLibrary("rfid" + ".dll", IRfid.class);
		}

		return rfid;
	}

}
