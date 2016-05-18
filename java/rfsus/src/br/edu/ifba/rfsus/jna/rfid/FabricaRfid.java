package br.edu.ifba.rfsus.jna.rfid;

import com.sun.jna.Native;
import com.sun.jna.Platform;

/* Esta classe é resposavel por criar uma instancia de leitura da biblioteca C++ rfid  no decorrer do software */

public class FabricaRfid {
	public static IRfid getInstancia() {
		IRfid rfid = null;

		if (Platform.isLinux()) {
			rfid = (IRfid) Native.loadLibrary("rfid" + ".so", IRfid.class);
		} else if (Platform.isWindows()) {
			rfid = (IRfid) Native.loadLibrary("rfid" + ".dll", IRfid.class);
		}

		return rfid;
	}

}
