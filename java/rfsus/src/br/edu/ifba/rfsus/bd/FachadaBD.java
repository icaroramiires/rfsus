package br.edu.ifba.rfsus.bd;

import java.util.Arrays;

import com.mongodb.MongoClient;
import com.mongodb.MongoCredential;
import com.mongodb.ServerAddress;
import com.mongodb.client.MongoDatabase;

public class FachadaBD {
	private static FachadaBD instancia = null;

	private String host;
	private int port;
	private String dbName;
	private String user;
	private String password;

	private FachadaBD() {
	}

	public static FachadaBD getInstancia() {
		if (instancia == null) {
			instancia = new FachadaBD();
		}
		return instancia;
	}

	public String getHost() {
		return host;
	}

	public void setHost(String host) {
		this.host = host;
	}

	public int getPort() {
		return port;
	}

	public void setPort(int port) {
		this.port = port;
	}

	public String getDbName() {
		return dbName;
	}

	public void setDbName(String dbName) {
		this.dbName = dbName;
	}

	public String getUser() {
		return user;
	}

	public void setUser(String user) {
		this.user = user;
	}

	public String getPassword() {
		return password;
	}

	public void setPassword(String password) {
		this.password = password;
	}

	public void configAll(String host, int port, String dbName, String user, String password) {
		this.setHost(host);
		this.setPort(port);
		this.setDbName(dbName);
		this.setUser(user);
		this.setPassword(password);
	}

	public MongoClient configClient() {
		ServerAddress server = new ServerAddress(host, port);
		MongoCredential credential = MongoCredential.createCredential(user, dbName, password.toCharArray());

		MongoClient client = new MongoClient(server, Arrays.asList(credential));

		return client;
	}

	public MongoDatabase configDB() {
		MongoDatabase db = this.configClient().getDatabase(dbName);
		return db;
	}
}
