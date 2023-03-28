#ifndef concessionaria_H
#define concessionaria_H
#include "veiculo.h"
#include "moto.h"
#include "carro.h"
#include "caminhao.h"
#include <vector>
using std::vector;
#include <string>
using std::string;


class Concessionaria{
	private:
		string nome;
		string cnpj;
		int quant_estoque;
		int quant_car = 0; 		//variável para saber a quantidade de carros na concessionária.
		int quant_bike = 0; 	//variável para saber a quantidade de motos na concessionária.
		int quant_truck = 0; 	//variável para saber a quantidade de caminhões na concessionária.
		int preço_car = 0; 	 	//variável para saber o valor dos carros na concessionária.
		int preço_truck = 0;	//variável para saber o valor dos caminhões na concessionária.
		int preço_bike = 0;		//variável para saber o valor das motos na concessionária.
		int valor_frota = 0;	//variável para saber o valor total da frota.
	public:
		vector<Veiculo> estoque; //Vetor de veículos (estoque) que cada concessionária possui
		Concessionaria(string n, string c, int q); 	//Construtor de concessionárias.
		string get_nome();		//método que retorna o nome da concessionária.
		string get_cnpj();		//método que retorna o CNPJ da concessionária.
		int get_estoque();		//método que retorna o estoque da concessionária.
		
		
		int get_quant_car(); 	//método que retorna a quantidade de carros.
		int get_quant_truck();	//método que retorna a quantidade de caminhões.
		int get_quant_bike();	//método que retorna a quantidade de motos.
		
		void add_quant_car();	//método para adicionar +1 na quantidade de carros.
		void add_quant_truck();	//método para adicionar +1 na quantidade de caminhões.
		void add_quant_bike();	//método para adicionar +1 na quantidade de motos.
		
		void sub_quant_car();	//método para subtrair -1 na quantidade de carros.
		void sub_quant_truck();	//método para subtrair -1 na quantidade de caminhões.
		void sub_quant_bike();	//método para subtrair -1 na quantidade de motos.
		
		void soma_estoque(); 	//método para fazer a soma da quantidade total de veículos no estoque.
		
		int get_preço_car();	//método para saber o valor líquido de todos os carros no estoque juntos.
		int get_preço_bike();	//método para saber o valor líquido de todas as motos no estoque juntos.
		int get_preço_truck();	//método para saber o valor líquido de todos os caminhões no estoque juntos.
		int get_frota_total(); 	//método para saber o valor líquido de todos os veículos no estoque juntos.
		
		void raise(float x); 		// método para aumento de preço nos veículos.
		void soma_frota();		// método que faz a soma da quantidade de veículos no estoque e retorna a quantidade total da frota.		
};

#endif
