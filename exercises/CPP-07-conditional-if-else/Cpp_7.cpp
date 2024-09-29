// ESTRUTURA CONDICIONAL IF ELSE
#include <iostream>

using namespace std;

int main(){
	int idade;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	if(idade > 18){
		cout << "Voce e maior de idade!";
	}else if(idade < 18 && idade > 0){
		cout << "Voce e menor de idade!";
	}else {
		cout << "Digite uma idade válida!";
	}
	return 0;	
}