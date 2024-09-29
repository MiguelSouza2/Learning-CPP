// VECTOR 
// MÉTODOS SWAP, PUSH_BACK, FRONT E BACK E AT

// MÉTODOS INSERT, ERASE, POP, BEGIN, END E CLEAR TAMBÉM FUNCIONAM DO MESMO MODO DESCRITO COM OS ARRAYS

#include <iostream>
// BILIOTECA PARA INCLUIR O VECTOR
#include <vector>

using namespace std;

int main(){
	
	int value;
	// DECLARANDO UM VECTOR DO TIPO INTEIRO
	vector<int> num1;
	vector<int> num2;
	
	cout << "Digite um número" << endl;
	cin >> value;
	system("cls");
	// ADICIONANDO VALORES NAS POSIÇÕES ATRAVÉS DO MÉTODO push_back()
	num1.push_back(value);
	num1.push_back(value - 1);
	num1.push_back(value + 4);
	num1.push_back(value - 3);
	// COMO NÃO FOI DEFINIDO UM TAMANHO, SE FIZESSE num[4] = 4; IRIA RETORNAR UM ERRO, MAS SE CHAMAR UMA POSIÇÃO JÁ DEFINIDA, IRÁ FUNCIONAR
	
	num2.push_back(1);
	num2.push_back(2);
	num2.push_back(3);
	num2.push_back(4);
	
	// UTILIZANDO O MÉTODO FRONT, BACK E AT PARA MOSTRAR OS PRIMEIRO E ÚLTIMO E QUAISQUER NÚMEROS. RESPECTIVAMENTE
		cout << "Primeiro valor de num1: " << num1.front() << endl << "Último valor de num1: " << num1.back() << endl << "Valor selecionado: " << num1.at(2) << endl << endl;
		cout << "Primeiro valor de num2: " << num2.front() << endl << "Último valor de num2: " << num2.back() << endl << "Valor selecionado: " << num2.at(1) << endl << endl;
		
	
	// VAMOS TROCAR OS VALORES ENTRE OS VETORES num1 E num2
	num1.swap(num2);
	
	for(int i=0; i < num1.size(); i++){
		// PODE SE FAZER A IMPRESSÃO CHAMANDO COMO UM ARRAY
		cout << "Vetor 1, posição " << i << ":" << num1[i] << endl;
	}

	cout << endl;
	
	for(int i=0; i < num2.size(); i++){
		cout << "Vetor 2, posição " << i << ":" << num2[i] << endl;
	}
	
	// RETORNANDO O TAMANHO DO VETOR
	cout << endl << "Quantas coisas tem dentro do vector1: " << num1.size() << endl;
	cout << endl << "Quantas coisas tem dentro do vector2: " << num2.size() << endl;
	
	return 0;
}