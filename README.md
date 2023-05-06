# ESTE TRABALHO É REFERENTE AO PROJETO DA UNIDADE 3 DA DISCIPLINA DE LINGUAGEM DE PROGRAMAÇÃO 1, OFERTADA NO IMD-UFRN.

# Compilação  

* É necessário para compilar o programa, ir para a pasta concessionaria-caiovitordm, em
seguida dar o comando Make ao seu terminal. Após compilado o programa, acessar a pasta build
via terminal e por fim dar o comando ./programa ao seu terminal.

Feito isso, agora já é possível passar os comandos do sistema de gestão de concessionárias ao terminal,
eles são:

# Caso não queira testar comando por comando, deixei uma pasta chamada Inputs, com arquivos de texto com entradas.
* Para compilar com o arquivo .txt dos inputs basta dar o comando
  ```./programa <../inputs/nome_do_arquivo.txt```
  - Exemplo:
    ```./programa <../inputs/teste-1.txt```


# Lista de Comandos para o programa
```create-concessionaria / add-car / add-bike / add-truck / search-vehicle / remove-vehicle
/ list-concessionaria / raise-price / quit```


# INSTRUÇÕES PARA O PROGRAMA

	* create-concessionaria 
		- Serve para criar uma concessionária 
		- recebe 3 parâmetros: Nome, CNPJ e estoque(se inicia, geralmente, com 0).

	* add-car 
		- Serve para para adicionar um carro em uma concessionária especificada pelo usuário
		- Recebe 6 parâmetros: Nome da Concessionária de Inserção, Marca, Preço, Chassi, Ano e o tipo de motor (gasolina ou elétrico).
		- Caso tente adicionar um carro com um Chassi que já exista, retornará mensagem de erro.
		- Caso tente adicionar em uma concessionária inexistente, retornará mensagem de erro.

	* add-bike 
		- Serve para adicionar uma moto em uma concessionária especificada pelo usuário.
		- Recebe 6 parâmetros: Nome da Concessionária de Inserção, Marca, Preço, Chassi, Ano e o tipo de modelo (clássico ou esportivo).
		- Caso tente adicionar uma moto com um Chassi que já exista, retornará mensagem de erro.
		- Caso tente adicionar em uma concessionária inexistente, retornará mensagem de erro.

	* add-truck 
		- Serve para adicionar um caminhão em uma concessionária especificada pelo usuário.
		- Recebe 6 parâmetros: Nome da Concessionária de Inserção, Marca, Preço, Chassi, Ano e o tipo de carga (normal ou perigosa).
		- Caso tente adicionar um caminhão com um Chassi que já exista, retornará mensagem de erro.
		- Caso tente adicionar em uma concessionária inexistente, retornará mensagem de erro.

	* search-vehicle 
		- Serve para procurar um veículo
		- Recebe apenas 1 parâmetro: O chassi do veículo que o usuário deseja procurar.
		- Caso não encontre o veículo em nenhum estoque de nenhuma das concessionárias, retornará mensagem de erro.
		- Caso encontre, retornará todos os dados do veículo: Concessionária a qual pertence, Marca, Preço, Chassi, Ano e o seu atributo específico.

	* remove-vehicle 
		- Serve para remover um veículo
		- Recebe apenas 1 parâmetro: O chassi do veículo que o usuário deseja remover.
		- Caso não encontre, o veículo em nenhum estoque de nenhuma das concessionárias, retornará mensagem de erro.
		- Caso encontre, irá fazer a remoção desse veículo do estoque da concessionária onde ele estava.

	* list-concessionaria 
		- Serve para listar os dados de uma concessionária
		- Recebe apenas 1 parâmetro: O nome da Concessionária a ser listada.
		- Caso não encontre encontre nenhuma concessionária com o nome passado como parâmetro, retornará mensagem de erro.
		- Caso encontre, retornará todos os dados da concessionária encontrada pelo programa.

	* raise-price
		- Serve para aumentar os preços dos veículos de uma determinada concessionária
		- Recebe 2 parâmetros: O nome da Concessionária e a porcentagem a qual o usuário deseja aumentar o valor dos veículos.
		- Caso não encontre a concessionária passada como parâmetro, retornará mensagem de erro.
		- Caso encontre, fará o aumento de preço em todos os veículos da concessionária especificada pelo usuário e também mostrará na tela o quanto
		cada tipo de veículo recebeu de aumento percentual no seu preço.

	* quit
		- Serve para sair do programa
		- Faz a limpeza de todos os estoques e de todas as concessionárias.

	* save-concessionaria
		- Não implementado.

	* load-concessionaria
		- Não implementado.

# CLASSES IMPLEMENTADAS

	* Concessionaria:
		- Possui 3 atributos: Nome, CNPJ e quantidade de estoque.
		- Possui um vetor de veículos chamado estoque.

	* Veículo:
		- É uma classe base.
		- Possui 4 atributos: Marca, Preço, Ano e Chassi.
		- Possui seus métodos próprios de gets e sets.

	* Carro:
		- É uma classe derivada da classe veículo.
		- Possui 4 atributos, herdados da classe veículo, junto com seu atributo exclusivo que corresponde ao tipo de motor.
		- Possui métodos herdados da classe base, além dos seus métodos próprios.

	* Moto:
		- É uma classe derivada da classe veículo.
		- Possui 4 atributos, herdados da classe veículo, junto com seu atributo exclusivo que corresponde ao tipo de modelo.
		- Possui métodos herdados da classe base, além dos seus métodos próprios.

	* Caminhao:
		- É uma classe derivada da classe veículo.
		- Possui 4 atributos, herdados da classe veículo, junto com seu atributo exclusivo que corresponde ao tipo de carga.
		- Possui métodos herdados da classe base, além dos seus métodos próprios.
