package br.edu.ifba.rfsus.bean;

public class Sensores {
	private int bpm;
	private int temp;
	private int pressaoS;
	private int pressaoD;

	public int getBpm() {
		return bpm;
	}

	public void setBpm(int bpm) {
		this.bpm = bpm;
	}

	public int getTemp() {
		return temp;
	}

	public void setTemp(int temp) {
		this.temp = temp;
	}

	public int getPressaoS() {
		return pressaoS;
	}

	public void setPressaoS(int pressaoS) {
		this.pressaoS = pressaoS;
	}

	public int getPressaoD() {
		return pressaoD;
	}

	public void setPressaoD(int pressaoD) {
		this.pressaoD = pressaoD;
	}
	
	@Override
	public String toString() {
		return "BPM: " + getBpm() + "\n"+ "TEMP: " + getTemp();
	}

}
