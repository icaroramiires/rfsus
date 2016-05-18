package br.edu.ifba.rfsus.jna.sensores;

import com.sun.jna.Native;
import com.sun.jna.Platform;

/* Esta classe é resposavel por criar uma instancia de leitura da biblioteca C++ sensores  no decorrer do software */

public class FabricaSensores {
	public	static ISensores getInstancia(){
		ISensores sensores = null;
		if(Platform.isLinux()) {
			sensores = (ISensores) Native.loadLibrary("sensores.so", ISensores.class);
		} else if (Platform.isWindows()) {
			sensores = (ISensores) Native.loadLibrary("sensores.dll", ISensores.class);
		}
		return sensores;
	} 
}
