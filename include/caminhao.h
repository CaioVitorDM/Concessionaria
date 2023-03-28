#ifndef caminhao_H
#define caminhao_H
#include "veiculo.h"
#include <string>
using std::string;

//Classe Caminhão, derivada da classe Veículo.
class Caminhao : public Veiculo{
	private:
		string carga;
	public:
		Caminhao(string ma, int p, string c, int a, string ca); //Construtor da classe Caminhão, possui 5 parâmetros.
		string get_carga();
};

#endif
