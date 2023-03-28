#include "veiculo.h"
#include "caminhao.h"
#include <string>
using std::string;

Caminhao::Caminhao(string ma, int p, string c, int a, string ca){
	marca = ma;
	preço = p;
	chassi = c;
	ano = a;
	carga = ca;
	atributo = ca;
	tipo = "caminhao";
}

string Caminhao::get_carga(){
	return carga;
}

