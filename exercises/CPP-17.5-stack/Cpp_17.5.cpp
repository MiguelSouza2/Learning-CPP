// STACK PARTE 2
#include <iostream>
#include <stack>

using namespace std;

int main(){
	int i=0;
	stack <string> cartas;
	
	cartas.push("Rei de copas"); // 4
	cartas.push("Rei de espadas"); // 3
	cartas.push("Rei de ouros"); // 2
	cartas.push("Rei de paus"); // 1

// MÉTODO EMPTY --> RETORNA TRUE OU FALSE SE A PILHA ESTIVER VAZIA OU NÃO
	for(i=0; i < 4; i++){
		cout << cartas.size() << endl;
		cartas.pop();
		// EMPTY VERIFICA SE A STACK cartas ESTÁ VAZIA
		if(cartas.empty()){
			cout << "ACABARAM AS CARTAS!" << endl;
		}
	}
	
	return 0;
}