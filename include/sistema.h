#ifndef SISTEMA_H
#define SISTEMA_H
#include <vector>
#include <string>
#include <iostream>
#include "concessionaria.h"



// Sistema deve concentrar todas as operações
class Sistema {
  private:
		//std::vector<Concessionaria> concessionarias; //um vetor com todos as concessionarias
		std::vector<Concessionaria> concessionarias;
  public:

		std::string quit();

		std::string create_concessionaria (const std::string nome);
		
		std::string add_car(const std::string nome);

		std::string add_truck(const std::string nome);

		std::string add_bike(const std::string nome);

		std::string remove_vehicle(const std::string chassi);

		std::string raise_price(const std::string nome);

		std::string search_vehicle(const std::string chassi);

		std::string list_concessionaria(const std::string nome);

		bool search(const std::string chassi);
	
};

#endif
