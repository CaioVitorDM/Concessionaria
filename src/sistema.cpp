#include "sistema.h"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
#include <string.h>
#include <iomanip>



using namespace std;

/* COMANDOS */

//Função para saída do sistema. Limpa todos os estoques e todas as concessionárias

string Sistema::quit() {
  for(int i = 0; i < concessionarias.size(); i++){
    for(int j = 0; j < concessionarias[i].estoque.size(); j++){
      concessionarias[i].estoque.clear();
    }
  }
  concessionarias.clear();
  return "\033[1;36mSaindo...\033[0m";
}

/*
Função resposável por criar as concessionárias, a qual recebe 3 atributos (Nome, CNPJ e estoque),
nela a concessionária vai ser instanciada e colocada no vetor de concessioárias.

----------------------------------------------------------------------------------------------
A leitura dos dados passados pela linha de comando é realizada de maneira idêntica em todas as
funções do projeto, utilizando o getline.
----------------------------------------------------------------------------------------------

*/

string Sistema::create_concessionaria (const string nome) {
  string atributos[3];
  int x = 0;
  string aux;
  stringstream nome2(nome);
  
  while(getline(nome2, aux, ' ')){
    atributos[x] = aux;
    x++;
  }

concessionarias.push_back(Concessionaria(atributos[0], atributos[1], stoi(atributos[2])));

string aux2 = "\033[1;36mConcessionária " + atributos[0] + " criada com sucesso\033[0m";

return aux2;
}

/*
-------------------------------------------------------------------------------------------------------
Função responsável por criar o objeto carro dentro do vetor de concessionárioas, o objeto
carro recebe 5 parâmetros (Marca, preço, chassi, ano e tipo de motor). Antes de instanciar
o objeto e adicioná-lo na concessionária especificada, a função faz uma busca em todas as
concessionárias e seus respectivos estoques checando se o veículo já havia sido adicionado antes
. Se sim, retorna uma mensagem de erro. Se não, o programa irá checar se a concessionária especificada
existe. Se sim, ele irá adicionar o carro nela. Se não, retorna uma mensagem de erro.
-------------------------------------------------------------------------------------------------------
*/

string Sistema::add_car (const string nome) {
  string atributos[6];
  int x = 0;
  string aux;
  stringstream nome2(nome);
  int pos;
  
  while(getline(nome2, aux, ' ')){
    atributos[x] = aux;
    x++;
  }

  if(!search(atributos[3])){
    
    for(int i = 0; i < concessionarias.size(); i++){
       if(concessionarias[i].get_nome().compare(atributos[0]) == 0){
        pos = i;
        break;
      }
      else{
        pos = -1; 
      }
    }
      
      if(pos != -1){
          concessionarias[pos].estoque.push_back(Carro(atributos[1], stoi(atributos[2]), atributos[3], stoi(atributos[4]), atributos[5]));
          concessionarias[pos].add_quant_car();
          string aux2 = "\033[1;36mVeículo " + atributos[3] + " adicionado à concessionária " + concessionarias[pos].get_nome() + "\033[0m";
          return aux2;

      }
      else{
        string aux2 = "\033[4;31mConcessionaria " + atributos[0] + " não encontrada" + "\033[0m";
        return aux2;
      }
    
    
  }


  string aux2 = "\033[4;31mERRO - Veículo " + atributos[3] + " já adicionado\033[0m";
  return aux2;
}

/*
-------------------------------------------------------------------------------------------------------
Função responsável por criar o objeto caminhão dentro do vetor de concessionárioas, o objeto
caminhão recebe 5 parâmetros (Marca, preço, chassi, ano e tipo de carga). Antes de instanciar
o objeto e adicioná-lo na concessionária especificada, a função faz uma busca em todas as
concessionárias e seus respectivos estoques checando se o veículo já havia sido adicionado antes
. Se sim, retorna uma mensagem de erro. Se não, o programa irá checar se a concessionária especificada
existe. Se sim, ele irá adicionar o caminhão nela. Se não, retorna uma mensagem de erro.
-------------------------------------------------------------------------------------------------------
*/

string Sistema::add_truck (const string nome) {
  string atributos[6];
  int x = 0;
  string aux;
  stringstream nome2(nome);
  int pos;
  
  while(getline(nome2, aux, ' ')){
    atributos[x] = aux;
    x++;
  }

  if(!search(atributos[3])){
    
    for(int i = 0; i < concessionarias.size(); i++){
       if(concessionarias[i].get_nome().compare(atributos[0]) == 0){
        pos = i;
        break;
      }
      else{
        pos = -1; 
      }
    }
      
      if(pos != -1){
          concessionarias[pos].estoque.push_back(Caminhao(atributos[1], stoi(atributos[2]), atributos[3], stoi(atributos[4]), atributos[5]));
          concessionarias[pos].add_quant_truck();
          string aux2 = "\033[1;36mVeículo " + atributos[3] + " adicionado à concessionária " + concessionarias[pos].get_nome() + "\033[0m";
          return aux2;

      }
      else{
        string aux2 = "\033[4;31mConcessionaria " + atributos[0] + " não encontrada" + "\033[0m";
        return aux2;
      }
    
    
  }


  string aux2 = "\033[4;31mERRO - Veículo " + atributos[3] + " já adicionado\033[0m";
  return aux2;
}

/*
-------------------------------------------------------------------------------------------------------
Função responsável por criar o objeto moto dentro do vetor de concessionárioas, o objeto
moto recebe 5 parâmetros (Marca, preço, chassi, ano e tipo de modelo). Antes de instanciar
o objeto e adicioná-lo na concessionária especificada, a função faz uma busca em todas as
concessionárias e seus respectivos estoques checando se o veículo já havia sido adicionado antes
. Se sim, retorna uma mensagem de erro. Se não, o programa irá checar se a concessionária especificada
existe. Se sim, ele irá adicionar a moto nela. Se não, retorna uma mensagem de erro.
-------------------------------------------------------------------------------------------------------
*/

string Sistema::add_bike (const string nome) {
  string atributos[6];
  int x = 0;
  string aux;
  stringstream nome2(nome);
  int pos;
  
  while(getline(nome2, aux, ' ')){
    atributos[x] = aux;
    x++;
  }

  if(!search(atributos[3])){
    
    for(int i = 0; i < concessionarias.size(); i++){
       if(concessionarias[i].get_nome().compare(atributos[0]) == 0){
        pos = i;
        break;
      }
      else{
        pos = -1; 
      }
    }
      
      if(pos != -1){
          concessionarias[pos].estoque.push_back(Moto(atributos[1], stoi(atributos[2]), atributos[3], stoi(atributos[4]), atributos[5]));
          concessionarias[pos].add_quant_bike();
          string aux2 = "\033[1;36mVeículo " + atributos[3] + " adicionado à concessionária " + concessionarias[pos].get_nome() + "\033[0m";
          return aux2;

      }
      else{
        string aux2 = "\033[4;31mConcessionaria " + atributos[0] + " não encontrada" + "\033[0m";
        return aux2;
      }
    
    
  }


  string aux2 = "\033[4;31mERRO - Veículo " + atributos[3] + " já adicionado\033[0m";
  return aux2;
}

/*
----------------------------------------------------------------------------------------
Função resposável por fazer a remoção de um veículo de uma concessionária.
A função procura pelo veículo nos estoques de todas as concessionárias checando
pelo chassi, se o chassi der match, ela vai checar qual o tipo de veículo, remover
1 unidade da quantidade total daquele veículo e em seguida apagá-lo. Caso não encontre,
retorna uma mensagem de erro.
----------------------------------------------------------------------------------------
*/

string Sistema::remove_vehicle(const string chassi){
  for(int i = 0; i < concessionarias.size(); i++){
    for(int j = 0; j < concessionarias[i].estoque.size(); j++){
      if(chassi == concessionarias[i].estoque[j].get_chassi()){
        
        if(concessionarias[i].estoque[j].get_tipo() == "carro"){
          concessionarias[i].sub_quant_car();
        }

        else if(concessionarias[i].estoque[j].get_tipo() == "caminhao"){
          concessionarias[i].sub_quant_truck();
        }

        else if(concessionarias[i].estoque[j].get_tipo() == "moto"){
          concessionarias[i].sub_quant_bike();
        }

        concessionarias[i].estoque.erase(concessionarias[i].estoque.begin() + j);
        string aux2 = "\033[1;36mVeículo " + chassi + " removido da concessionária " + concessionarias[i].get_nome() + "\033[0m";
        return aux2;
      }
    }
  }

  string aux2 = "\033[4;31mNão foi possível remover o veículo " + chassi + "\033[0m";
  return aux2;
}

/*
-------------------------------------------------------------------------------------
Função responsável por fazer o aumento nos preços da concessionária
especificada pelo usuário. A função checa se a concessionária existe.
Se sim, ela irá fazer o aumento nos preços dos veículos, juntamente com
um print na tela mostrando em quantos porcento foi aumentado o valor de cada veículo
e uma mensagem de sucesso na tela. Caso não encontre, retorna uma mensagem de erro.
-------------------------------------------------------------------------------------
*/

string Sistema::raise_price(const string nome){
  string atributos[2];
  int x = 0;
  string aux;
  stringstream nome2(nome);
  int pos;
  
  while(getline(nome2, aux, ' ')){
    atributos[x] = aux;
    x++;
  }

  for(int i = 0; i < concessionarias.size(); i++){
       if(concessionarias[i].get_nome().compare(atributos[0]) == 0){
        pos = i;
        break;
      }
      else{
        pos = -1; 
      }
    }

  
  if(pos != -1){
    
    concessionarias[pos].raise(stof(atributos[1]));

    float num1 = stof(atributos[1]) * 2;
    float num2 = stof(atributos[1]) * 3;

    stringstream stream1;
    stringstream stream2;

    stream1 << fixed << setprecision(2) << num1;
    stream2 << fixed << setprecision(2) << num2;
    string v2 = stream1.str();
    string v3 = stream2.str();



    string aux2 = "\033[1;37mAumento de " + atributos[1] + "%" + " nos preços de carros na concessionária " + atributos[0] + "\033[0m";
    string aux3 = "\033[1;37mAumento de " + v2 + "%" + " nos preços de motos na concessionária " + atributos[0] + "\033[0m";
    string aux4 = "\033[1;37mAumento de " + v3 + "%" + " nos preços de caminhões na concessionária " + atributos[0] + "\033[0m";

    cout << aux2 << endl;
    cout << aux3 << endl;
    cout << aux4 << endl;

  }

  else{
    string aux2 = "\033[4;31mConcessionária " + atributos[0] + " não encontrada\033[0m";
    return aux2;
   }
   

  string aux5 = "\033[1;36mAumento nos preços dos Veículos da concessionária " + concessionarias[pos].get_nome() + " realizado com sucesso\033[0m";
  return aux5;
}

/*
--------------------------------------------------------------------------------------------------
Função para listagem das concessionárias. A função checa se a concessionária especificada
pelo usuário existe. Se sim, ela irá fazer um print na tela com todos os dados da concessionária.
Se não, retornará uma mensagem de erro.
--------------------------------------------------------------------------------------------------
*/

string Sistema::list_concessionaria(const string nome){
  int pos;
  for(int i = 0; i < concessionarias.size(); i++){
       if(concessionarias[i].get_nome().compare(nome) == 0){
        pos = i;
        break;
      }
      else{
        pos = -1; 
      }
    }

  if(pos != -1){
    cout << "\033[1;37mConcessionária " << concessionarias[pos].get_nome() << endl;
    cout << "Total de Automóveis: " << concessionarias[pos].get_quant_car() << "; " << "Valor total: R$ " << concessionarias[pos].get_preço_car() << endl;
    cout << "Total de Motos: " << concessionarias[pos].get_quant_bike() << "; " << "Valor total: R$ " << concessionarias[pos].get_preço_bike() << endl;
    cout << "Total de Caminhões: " << concessionarias[pos].get_quant_truck() << "; " << "Valor total: R$ " << concessionarias[pos].get_preço_truck() << endl;
    cout << "Valor Total da frota: R$ " << concessionarias[pos].get_frota_total() << endl;
  }
  
  else{
    string aux = "\033[4;31mConcessionária " + nome + " não encontrada\033[0m";
    return aux;
   }
   

  concessionarias[pos].soma_estoque();
  string aux = "Estoque total: " + to_string(concessionarias[pos].get_estoque()) + "\033[0m";
  return aux;
}

/*
----------------------------------------------------------------------------------------------
Função responsável por fazer a busca de um veículo e a impressão dos seus dados na tela. 
Ela irá procurar pelo veículo nos estoques de todas as concessionárias. Se encontrar, irá
checar o tipo do veículo e imprimir todos os seus atributos de acordo com seu tipo juntamente
com uma mensagem de sucesso. Caso não encontre, ela irá retorna uma mensagem de erro.
----------------------------------------------------------------------------------------------
*/

string Sistema::search_vehicle(const string chassi){
  for(int i = 0; i < concessionarias.size(); i++){
    for(int j = 0; j <concessionarias[i].estoque.size(); j++){
      if(chassi == concessionarias[i].estoque[j].get_chassi()){
        cout << "\033[1;37mConcessionária: " << concessionarias[i].get_nome() << endl;
        if(concessionarias[i].estoque[j].get_tipo() == "carro"){
          cout << "Marca: " << concessionarias[i].estoque[j].get_marca() << endl;
          cout << "Preço: R$ " << concessionarias[i].estoque[j].get_preço() << endl;
          cout << "Chassi: " << concessionarias[i].estoque[j].get_chassi() << endl;
          cout << "Ano: " << concessionarias[i].estoque[j].get_ano() << endl;
          cout << "Tipo de motor: " << concessionarias[i].estoque[j].get_atributo() << "\033[0m" << endl;
        }

        else if(concessionarias[i].estoque[j].get_tipo() == "caminhao"){
          cout << "\033[1;37mMarca: " << concessionarias[i].estoque[j].get_marca() << endl;
          cout << "Preço: R$ " << concessionarias[i].estoque[j].get_preço() << endl;
          cout << "Chassi: " << concessionarias[i].estoque[j].get_chassi() << endl;
          cout << "Ano: " << concessionarias[i].estoque[j].get_ano() << endl;
          cout << "Tipo de carga: " << concessionarias[i].estoque[j].get_atributo() << "\033[0m" << endl;
        }

        else if(concessionarias[i].estoque[j].get_tipo() == "moto"){
          cout << "\033[1;37mMarca: " << concessionarias[i].estoque[j].get_marca() << endl;
          cout << "Preço: R$ " << concessionarias[i].estoque[j].get_preço() << endl;
          cout << "Chassi: " << concessionarias[i].estoque[j].get_chassi() << endl;
          cout << "Ano: " << concessionarias[i].estoque[j].get_ano() << endl;
          cout << "Tipo de modelo: " << concessionarias[i].estoque[j].get_atributo() << "\033[0m" << endl;
        }
        string aux = "\033[1;36mVeículo " + chassi + " encontrado com sucesso\033[0m";
        return aux;
      }
    }
  }
  string aux = "\033[4;31mVeículo " + chassi + " não encontrado\033[0m";
  return aux;
}

/*
------------------------------------------------------------------------------------------------------
Função auxiliar, desenvolvida para checar se o veículo já existe em alguma concessionária
ou não. A função recebe como parâmetro o chassi e faz a busca no estoque de todas as concessionárias.
Se encontrar um match, retorna verdadeiro. Se não encontrar, retorna falso
------------------------------------------------------------------------------------------------------
*/

bool Sistema::search(const string chassi){
  for(int i = 0; i < concessionarias.size(); i++){
    for(int j = 0; j < concessionarias[i].estoque.size(); j++){
      if(chassi == concessionarias[i].estoque[j].get_chassi()){
        return true;
      }
    }
  }

  return false;
}
