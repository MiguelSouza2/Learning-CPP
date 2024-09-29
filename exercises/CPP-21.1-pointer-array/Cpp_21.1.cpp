// PONTEIROS COM ARRAYS

// OBS: um int tem 4 bytes

#include <iostream>

using namespace std;

int main(){
	int numbers[10];
	int *pn;
	
	// pn RECEBE O ENDEREÇO DE MEMÓRIA DO PRIMEIRO ELEMENTO DO ARRAY numbers
	pn = &numbers[0]; // ou pn = numbers; 	primeira posição 0
		
	cout << pn << endl;
	pn = &numbers[1]; //					segunda posição 4
	
	
	cout << pn << endl;
	//pn = &numbers[2]; //					terceira posição 8
	
	// TAMBÉM PODEMOS INCREMENTAR UM PARA AVANÇAR UMA POSIÇÃO DO ENDEREÇO
	*(pn++);
	
	cout << pn << " Incrementado" << endl;

	return 0;
}