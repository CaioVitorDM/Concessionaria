#ifndef veiculo_H
#define veiculo_H
#include <string>
using std::string;

// Classe base veículo.

class Veiculo{
	protected:
		string marca;
		int preço;
		string chassi;
		int ano;
		string atributo;
		string tipo;			//variável criada para checar os tipos dos veículos nas condicionais.
	public:
		string get_marca();		//método que retorna a marca do veículo.
		int get_preço();		//método que retorna o preço do veículo.
		void set_preço(int p);	//método para colocar ou mudar o preço do veículo.
		string get_chassi();	//método que retorna o chassi do veículo.
		int get_ano();			//método que retorna o ano do veículo.
		string get_tipo();		//método que retorna o tipo do veículo.
		string get_atributo();	
};

#endif
