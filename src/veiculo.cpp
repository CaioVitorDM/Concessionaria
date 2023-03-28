#include <string>
using std::string;
#include "veiculo.h"
#include <iostream>


string Veiculo::get_marca(){
	return marca;
}

int Veiculo::get_preço(){
	return preço;
}

string Veiculo::get_chassi(){
	return chassi;
}

int Veiculo::get_ano(){
	return ano;
}

void Veiculo::set_preço(int p){
	preço = p;
}

string Veiculo::get_tipo(){
	return tipo;
}

string Veiculo::get_atributo(){
	return atributo;
}




