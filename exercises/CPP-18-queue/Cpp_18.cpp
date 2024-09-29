// FILA --> QUEUE
// SIMILAR AO STACK, MAS O PRIMEIRO ELEMENTO A ENTRAR É O PRIMEIRO A SAIR

/*
	Métodos:
		pop, push, empty, size, front e back.
*/

#include <iostream>
#include <queue>

using namespace std;

int main(){
	int i;
	queue <string> cartas;
	
	// PUSH PRA INCLUIR ELEMENTOS NO QUEUE
	cartas.push("Rei de copas"); // 1
	cartas.push("Rei de espadas"); // 2
	cartas.push("Rei de ouros"); // 3
	cartas.push("Rei de paus"); // 4
	
	cout << "tamanho da pilha antes: " << cartas.size() << endl;
	
	// FRONT PRA EXIBIR O ELEMENTO NA FRENTE
	cout << "elemento do topo antes: " << cartas.front() << endl;
	cout << "elemento de trás antes: " << cartas.back() << endl;
	
	// POP PRA RETIRAR ELEMENTOS DE UMA PILHA DE ELEMENTOS NO STACK
	// RETIRA O ELEMENTO DO TOPO
	cartas.pop();
	
	cout << "tamanho da pilha depois: " << cartas.size() << endl;
	
	cout << "elemento do topo depois: " << cartas.front() << endl;
	cout << "elemento de trás depois: " << cartas.back() << endl;
	system("pause");
	
	
		while(!cartas.empty()){
			cout << "primeira carta: " << cartas.front() << endl;
			cartas.pop();						
		}
		cout << "ACABARAM AS CARTAS!" << endl;


	return 0;	
}