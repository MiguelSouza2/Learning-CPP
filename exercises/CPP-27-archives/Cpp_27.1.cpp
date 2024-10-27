// MANIPULAÇÃO DE ARQUIVOS COM C++ (OFSTREAM)

// ofstream -> TIPO DE SAÍDA 	INFO(SISTEMA) -> ARQUIVO
// ifstream -> TIPO DE ENTRADA 	INFO(ARQUIVO) -> SISTEMA
// fstream 	-> TIPO DE ENTRADA OU SAÍDA		

#include <iostream>
// IMPORTANDO BIBLIOTECA PARA TRABALHAR COM FSTREAM
#include <fstream>

using namespace std;

int main(){
	// TIPO ofstream
	ofstream archive;
	// CRIA O ARQUIVO "uub.txt" E ARMAZENA		uub.txt(SISTEMA) -> ARQUIVO
	archive.open("uub.txt");
	
	// ADICIONA O TEXTO SEM SOBRESCREVER
	//archive.open("uub.txt", ios::app);
	
	// GUARDA O TEXTO NO ARQUIVO
	archive << "olá, meu nome é [seu nome] ou [seu apelido] para os mais íntimos rs.\n";
	// FECHANDO O ARQUIVO PARA NÃO OCUPAR MAIS MEMÓRIA JÁ QUE NÃO VAMOS MAIS USÁ-LO 
	archive.close();
	
	
	return 0;
}