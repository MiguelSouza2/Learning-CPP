// PONTEIROS COM ARRAYS (CONTINUAÇÃO)

#include <iostream>

using namespace std;

int main(){
	int numbers[10];
	int *pn;
	
	// INICIALMENTE:
		pn = &numbers[0]; 
	
	// NO ENDEREÇO DO PONTEIRO (numbers[0]), DEFINIR 10
	*pn = 10;
		
	cout << numbers[0] << endl;
	
	// AVANÇA UMA POSIÇÃO NO PONTEIRO
	*(pn++);
	
	// NO ENDEREÇO DO PONTEIRO (numbers[1]), DEFINIR 20
	*pn = 20;
	
	cout << numbers[1] << endl;
	
	*(pn++);
	
	// NO ENDEREÇO DO PONTEIRO (numbers[2]), DEFINIR 30
	*pn = 30;
	
	cout << numbers[2] << endl;
	
	// ISSO NOS PERMITIU DEFINIR VALORES PARA A POSIÇÕES DO VETOR DE FORMA SIMPLES

	return 0;
}