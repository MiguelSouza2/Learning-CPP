/* PONTEIRO --> int *num;
   														end		tipo	valor	nome
 UM PONTEIRO ARMAZENA O ENDEREÇO DE UMA VARIÁVEL. EX: 	100		int		 4		num
													
													int *numbers;
													numbers = &num		// & É O OPERADOR DE ENDEREÇO
													
													cout << *numbers;
												vai retornar: 4
													cout << numbers;
												vai retornar: 100



	¬¬ COM O PONTEIRO, POSSO ACESSAR O VALOR DA VARIÁVEL EM QUALQUER LUGAR DA FUNÇÃO

*/
#include <iostream>

using namespace std;

int main(){
	string animal = "Cachorro";
	// PONTEIRO DE ANIMAL --> vai armazenar um endereço
	
	//cout << animal;
	//VAI RETORNAR: Cachorro
	
	string *pa;
	
	pa = &animal; // ARMAZENANDO O ENDEREÇO DE ANIMAL
	
	/*
		// IMPRIME O ENDEREÇO DE ANIMAL NA MEMÓRIA RAM
		cout << pa << endl << &animal;
		
		// IMPRIME O VALOR DE ANIMAL
		cout << *pa << animal;
		
	*/
	
	*pa = "Gato"; // NO ENDEREÇO APONTADO POR *pa, ADICIONE O VALOR "Gato"
	
	cout << *pa << endl <<  animal; // POR &animal TER O ENDEREÇO *pa E "Gato" SUBSTITUIR ESSE VALOR, O VALOR DE &animal VIROU "Gato"
	
	return 0;
}