#include "veiculo.h"
#include "carro.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

Carro::Carro(string ma, int p, string c, int a, string mo){
	marca = ma;
	preço = p;
	chassi = c;
	ano = a;
	motor = mo;
	atributo = mo;
	tipo = "carro";
}

string Carro::get_motor(){
	return motor;
}

