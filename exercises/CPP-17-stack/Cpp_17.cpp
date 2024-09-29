// PILHAS --> STACK parte 1
// O ÚLTIMO ELEMENTO A ENTRAR NA PILHA, SERÁ O PRIMEIRO A SAIR
/*							[	  pilha		]
								1 2 3 4 5

	Elementos entrados	 -->[	° ° ° ° O	]
	Elemento a ser usado -->[	O ° ° ° °	]
*/
#include <iostream>
// BIBLIOTECA <stack> PARA PODER TRABALHAR COM PILHAS
#include <stack>

using namespace std;

int main(){
	stack <string> cartas;
	
	// PUSH PRA INCLUIR ELEMENTOS NO STACK
	cartas.push("Rei de copas"); // 4
	cartas.push("Rei de espadas"); // 3
	cartas.push("Rei de ouros"); // 2
	cartas.push("Rei de paus"); // 1
	
	cout << "tamanho da pilha antes: " << cartas.size() << endl;
	
	// TOP PRA EXIBIR O ELEMENTO DO TOPO
	cout << "elemento do topo antes: " << cartas.top() << endl;
	
	// POP PRA RETIRAR ELEMENTOS DE UMA PILHA DE ELEMENTOS NO STACK
	// RETIRA O ELEMENTO DO TOPO
	cartas.pop();
	
	cout << "tamanho da pilha depois: " << cartas.size() << endl;
	
	cout << "elemento do topo depois: " << cartas.top() << endl;
	return 0;
}