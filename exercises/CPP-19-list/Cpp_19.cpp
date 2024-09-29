// LISTAS --> LIST 	PARTE 1

/*
	Sort, reverse, push_front, push_back, pop_front, pop_back, size...
*/

#include <iostream>
// BIBLIOTECA list PARA PODERMOS USAR A LIST
#include <list>

using namespace std;

int main(){
	list <int> numeros;	
	int i, tam = 10;
	// O ITERATOR VAI NOS PERMITIR SELECIONAR A POSIÇÃO
	list <int>::iterator it;

	
	for(i=0; i < tam; i++){
		// push_front VAI ADICIONAR ELEMENTOS NA FRENTE DA FILA
		// push_back VAI ADICIONAR ELEMENTOS ATRÁS NA FILA
		numeros.push_front(i);
		
		numeros.push_back(i);
	}
	
	// COMEÇA DO INÍCIO DA FILA
	it = numeros.begin();
	// AVANÇA ATÉ A QUINTA POSIÇÃO DEPOIS DO INÍCIO
	advance(it, 5);
	// INSERE O ELEMENTO DESEJADO NA POSIÇÃO
	numeros.insert(it, 200);
	
	// ORDENA OS ELEMENTOS DA LISTA DE FORMA CRESCENTE
	// numeros.sort();
	// INVERTE A ORDEM DOS ELEMENTOS NA LISTA
	 numeros.reverse();
	
	cout << "Tamanho da lista: " << numeros.size() << endl;
	
	tam = numeros.size();
	for(i=0; i < tam; i++){
		cout << "Elemento da frente: " << numeros.front() << endl;
		numeros.pop_front();
	}
	
	return 0;
}