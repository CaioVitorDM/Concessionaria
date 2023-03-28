#include "veiculo.h"
#include "moto.h"
#include <string>
using std::string;

Moto::Moto(string ma, int p, string c, int a, string mo){
	marca = ma;
	preço = p;
	chassi = c;
	ano = a;
	modelo = mo;
	atributo = mo;
	tipo = "moto";
}

string Moto::get_modelo(){
	return modelo;
}


