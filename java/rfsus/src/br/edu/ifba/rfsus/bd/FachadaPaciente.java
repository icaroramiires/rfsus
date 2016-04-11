package br.edu.ifba.rfsus.bd;

import java.util.ArrayList;
import java.util.Date;

import com.mongodb.BasicDBObject;
import com.mongodb.DB;
import com.mongodb.DBCollection;
import com.mongodb.DBCursor;

import br.edu.ifba.rfsus.bean.Paciente;

public class FachadaPaciente {
	private static FachadaPaciente instancia = null;

	private FachadaPaciente() {
	}

	public static FachadaPaciente getInstancia() {
		if (instancia == null) {
			instancia = new FachadaPaciente();
		}
		return instancia;
	}

	public Paciente getPacienteById(String rfid) {
		DB db = FachadaBD.getInstancia().configClient().getDB("rfsus");

		DBCollection collection = db.getCollection("paciente");

		BasicDBObject query = new BasicDBObject("rfid", rfid);

		DBCursor cursor = collection.find(query);

		Paciente paciente = new Paciente();

		paciente.setRg((String) cursor.one().get("rg"));
		paciente.setNome((String) cursor.one().get("nome"));
		paciente.setDataNascimento((Date) cursor.one().get("data_nascimento"));
		paciente.setAltura((Double)cursor.one().get("altura")); 
		paciente.setPeso((Double)cursor.one().get("peso")); 
		paciente.setTipoSanguineo((String)cursor.one().get("tipo_sanguineo")); 
		paciente.setObservacoes((ArrayList<String>)cursor.one().get("observacao"));
		
		return paciente;
	}

}