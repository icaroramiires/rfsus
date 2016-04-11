package br.edu.ifba.rfsus.jna.rfid;

import com.sun.jna.Native;
import com.sun.jna.Platform;

public class FabricaRfid {

	public static IRfid getInstancia() {
		IRfid rfid = null;

		if (Platform.isLinux()) {
			rfid = (IRfid) Native.loadLibrary("comunicacaoConsulta.so", IRfid.class);
		} else if (Platform.isWindows()) {
			rfid = (IRfid) Native.loadLibrary("comunicacaoConsulta.dll", IRfid.class);
		}

		return rfid;
	}

}
