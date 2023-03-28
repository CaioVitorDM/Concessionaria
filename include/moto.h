#ifndef moto_H
#define moto_H
#include "veiculo.h"
#include <string>
using std::string;

//Classe Moto, derivada da classe Veículo.
class Moto : public Veiculo{
	private:
		string modelo;
	public:
		Moto(string ma, int p, string c, int a, string mo); //Construtor padrão da classe moto, possui 5 parâmetros.
		string get_modelo();

};

#endif
