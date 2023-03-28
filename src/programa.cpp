#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "sistema.h"
#include "executor.h"



using namespace std;

int main() {
  // inicialização do sistema

  //prints iniciais do sistema.
  cout << "\033[1;37m=====================================================================\033[0m" << endl;
  cout << "\033[;37m              Bem vind@ ao Sistema de Gerenciamento\033[0m" << endl;
  cout << "\033[;37m              de Concessionárias v1.0" << endl;
  cout << "\033[;37m              Copyright (C) 2022, Caio Vitor Dantas M.\033[0m" << endl;
  cout << "\033[1;37m=====================================================================\033[0m" << endl;
  cout << endl;
  cout << "\033[1;36m---------------------------------------------------------------------\033[0m" << endl;
  cout << "\033[1;36m        Este é um programa baseado nas operações de CRUD, no\033[0m" << endl;
  cout << "\033[1;36m        qual é possível criar e gerir Concessionárias e Veículos\033[0m" << endl;
  cout << "\033[1;36m        (Carros, Motos, Caminhões). Obrigado por utilizar :).\033[0m" << endl;
  cout << "\033[1;36m---------------------------------------------------------------------\033[0m" << endl;
  cout << endl;
  cout << "\033[1;33m---------------------------------------------------------------------\033[0m" << endl;
  cout << "\033[1;33m                        -Lista de Comandos:\033[0m" << endl;
  cout << "\033[;33m        create-concessionaria / add-car / add-bike / add-truck\033[0m" << endl;
  cout << "\033[;33m        remove-vehicle / search-vehicle / list-concessionaria\033[0m" << endl;
  cout << "\033[;33m        raise-price.\033[0m" << endl;
  cout << endl;
  cout << "\033[;33m       Para saber mais sobre os comandos e suas especificações,\033[0m" << endl;
  cout << "\033[;33m       acesse o arquivo Program_Instructions.\033[0m" << endl;
  cout << "\033[;33m---------------------------------------------------------------------\033[0m" << endl;
  cout << endl;
  cout << "\033[1;36m Linhas de Comandos:\033[0m" << endl;

  Sistema sistema;
  Executor executor(sistema);

  // o executor recebe o cin e o cout. Ele os utilizará para ler as linhas
  // de comando, executar o método correto em "sistema" e exibir as mensagens
  executor.iniciar(cin, cout);

  return 0;
}
