#ifndef carro_H
#define carro_H
#include "veiculo.h"
#include <string>
using std::string;

//Classe Carro, derivada da classe Veículo.
class Carro : public Veiculo{
	private:
		string motor;
	public:
		Carro(string ma, int p, string c, int a, string mo); //Construtor da classe Carro, possui 5 parâmetros.
		string get_motor();
};

#endif
