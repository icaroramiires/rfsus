package br.edu.ifba.rfsus.bean;

import java.util.ArrayList;
import java.util.Date;

/* Esta classe representa a entidade Paciente definida no banco de dados */

public class Paciente {
	private String rfid;
	private String rg;
	private String nome;
	private Date dataNascimento;
	private String tipoSanguineo;
	private Double peso;
	private Double Altura;
	private ArrayList<String> observacoes = new ArrayList<>();
	
	public String getRg() {
		return rg;
	}

	public void setRg(String rg) {
		this.rg = rg;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public Date getDataNascimento() {
		return dataNascimento;
	}

	public void setDataNascimento(Date dataNascimento) {
		this.dataNascimento = dataNascimento;
	}

	public String getRfid() {
		return rfid;
	}

	public void setRfid(String rfid) {
		this.rfid = rfid;
	}

	public String getTipoSanguineo() {
		return tipoSanguineo;
	}

	public void setTipoSanguineo(String tipoSanguineo) {
		this.tipoSanguineo = tipoSanguineo;
	}

	public Double getPeso() {
		return peso;
	}

	public void setPeso(Double peso) {
		this.peso = peso;
	}

	public Double getAltura() {
		return Altura;
	}

	public void setAltura(Double altura) {
		Altura = altura;
	}

	public ArrayList<String> getObservacoes() {
		return observacoes;
	}

	public void setObservacoes(ArrayList<String> observacoes) {
		this.observacoes = observacoes;
	}
}
