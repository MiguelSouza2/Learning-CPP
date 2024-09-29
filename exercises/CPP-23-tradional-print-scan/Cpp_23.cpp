// COMANDOS TRADICIONAIS DE IMPRESSÃO E LEITURA (C)

#include <iostream>
#include <stdlib.h>

// PARA USAR PRINTF E SCANF
#include <stdio.h>

using namespace std;

int main(){
	char word[10];
	int n = 1;
	
	// %d, %i REFERENCIA UMA VARIÁVEL INTEIRA
	// %x, %X PARA UMA VARIÁVEL HEXADECIMAL
	// %u PARA INTEIRO SEM SINAL (NEGATIVO)
	// %s PARA STRING
	// %f PARA FLOAT
	// %p PARA PONTEIRO
	
	scanf("%s %d", &word, &n);
	
	printf("Essa e uma palavra %s %d", word, n);
	
	return 0;
}