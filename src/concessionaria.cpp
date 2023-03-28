#include "veiculo.h"
#include "concessionaria.h"
#include "moto.h"
#include "carro.h"
#include "caminhao.h"
#include <string>
using std::string;

Concessionaria::Concessionaria(string n, string c, int q){
	nome = n;
	cnpj = c;
	quant_estoque = q;
}

string Concessionaria::get_nome(){
	return nome;
}

string Concessionaria::get_cnpj(){
	return cnpj;
}

int Concessionaria::get_estoque(){
	return quant_estoque;
}

int Concessionaria::get_quant_car(){
	return quant_car;
}

int Concessionaria::get_quant_truck(){
	return quant_truck;
}

int Concessionaria::get_quant_bike(){
	return quant_bike;
}

void Concessionaria::add_quant_car(){
	quant_car++;
}

void Concessionaria::add_quant_truck(){
	quant_truck++;
}

void Concessionaria::add_quant_bike(){
	quant_bike++;
}

void Concessionaria::sub_quant_car(){
	quant_car--;
}

void Concessionaria::sub_quant_truck(){
	quant_truck--;
}

void Concessionaria::sub_quant_bike(){
	quant_bike--;
}

void Concessionaria::soma_estoque(){
	quant_estoque = quant_car + quant_truck + quant_bike;
}

int Concessionaria::get_preço_car(){
	preço_car = 0;
	for(int i = 0; i < estoque.size(); i++){
		if(estoque[i].get_tipo() == "carro"){
			preço_car += estoque[i].get_preço();
		}
	}
	return preço_car;
}

int Concessionaria::get_preço_truck(){
	preço_truck = 0;
	for(int i = 0; i < estoque.size(); i++){
		if(estoque[i].get_tipo() == "caminhao"){
			preço_truck += estoque[i].get_preço();
		}
	}
	return preço_truck;
}

int Concessionaria::get_preço_bike(){
	preço_bike = 0;
	for(int i = 0; i < estoque.size(); i++){
		if(estoque[i].get_tipo() == "moto"){
			preço_bike += estoque[i].get_preço();
		}
	}
	return preço_bike;
}

int Concessionaria::get_frota_total(){
	valor_frota = 0;
	for(int i = 0; i < estoque.size(); i++){
		valor_frota += estoque[i].get_preço();
	}
	return valor_frota;
}


void Concessionaria::raise(float x){
	for(int i = 0; i < estoque.size(); i++){
		if(estoque[i].get_tipo() == "carro"){
			float aux1 = estoque[i].get_preço() * (float)(x/100);
			int aux2 = estoque[i].get_preço() + aux1;
			estoque[i].set_preço(aux2);
		}
		else if(estoque[i].get_tipo() == "moto"){
			float aux1 = estoque[i].get_preço() * ((2 * x) / 100);
			int aux2 = estoque[i].get_preço() + aux1;
			estoque[i].set_preço(aux2);
		}
		else if(estoque[i].get_tipo() == "caminhao"){
			float aux1 = estoque[i].get_preço() * ((3 * x) / 100);
			int aux2 = estoque[i].get_preço() + aux1;
			estoque[i].set_preço(aux2);
		}
	}

}
