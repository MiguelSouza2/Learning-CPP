// ALOCAÇÃO DINÂMICA DA MEMÓRIA --> MALLOC
// É de suma importância saber reservar memória para que não tenha falta de memória durante a execução do programa e nem use muita

#include <iostream>
// PARA A FUNÇÃO GETS
#include <stdio.h>
// PARA A FUNÇÃO MALLOC
#include <stdlib.h>
using namespace std;

int main(){
	char *valNome;
	// ADICIONA AO VALOR DO PONTEIRO valNome O VALOR DO TAMANHO DA ALOCAÇÃO DA MEMÓRIA DO TIPO CHAR, ASSIM, SEM USAR MUITA OU POUCA MEMÓRIA
	valNome = (char *) malloc(sizeof(char));
	
/*	char valNome[50];
	
	// SE EU ADICIONAR MAIS DE UMA PALAVRA, IREI TER APENAS A PRIMEIRA GUARDADA
	// cin >> valNome;
*/	
	// A FUNÇÃO GETS PEGA O VALOR E GUARDA NA VARIÁVEL, ASSIM, TEM-SE AS DUAS PALAVRAS
	gets(valNome);
	cout << valNome;

	return 0;
}