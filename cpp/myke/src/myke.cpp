#include <iostream>
#include <stdlib.h>
#include <map>
#include <string.h>
#include <stdio.h>
using namespace std;

struct carro{
	char marca[10];
	char modelo[10];
	int ano;
	float multa;
	float ipva;
	float valor;
};
carro a;
map<char*,carro>tabela;
char placa[7];

void add(){
		cin.ignore();
		cout<<"digite a placa:\n";
		gets(placa);
		cin.ignore();
		cout<<"digite a marca\n";
		gets(a.marca);
		cout<<"digite o modelo \n";
		gets(a.modelo);
		cout<<"digite o ano\n";
		cin>>a.ano;
		cout<<"digite o valor do carro:\n";
		cin>>a.valor;
		cout<<"valor em multa\n";
		cin>>a.multa;
		tabela.insert(pair<char*,carro>(placa, a));

}

void deletar(){
	cout<<"qual placa deseja excluir:\n";
	cin>>placa;
	tabela.erase(placa);
}

void procurar(){
	cout<<"qual placa deseja procurar:\n";
	cin>>placa;
	cout << placa;
	map<char*,carro>::iterator i = tabela.find(placa);
	cout<<"marca do carro:"<<(*i).second.marca<<endl;
	cout<<"modelo do carro:"<<(*i).second.modelo<<endl;
	cout<<"ano do carro:"<<(*i).second.ano<<endl;
}

int main(){
	int x;
	do{
		cout<<"menu:\n";
		cout<<"1-add\n";
		cout<<"2-deletar:\n";
		cout<<"3-procurar:\n";
		cout<<"4-sair:\n";
		cin>>x;

	switch(x){

		case 1:
			add();
			break;

		case 2:
		  deletar();
		  break;

		case 3:
			procurar();
			break;

	}
	}
	while(x!=4);
	system ("pause");
	return 0;
}
