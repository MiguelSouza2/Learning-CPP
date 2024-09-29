// LISTAS --> LIST 	PARTE 2

// MÉTODO ERASE, CLEAR, EMPTY, MERGE.

#include <iostream>
#include <list>

using namespace std;

int main(){
	list <int> numeros, teste;	
	int i, tam = 10;
	list <int>::iterator it;
	
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);
	teste.push_front(9);
	
	for(i=0; i < tam; i++){
		numeros.push_front(i);
		
		numeros.push_back(i);
	}
	
	it = numeros.begin();
	advance(it, 3);
	// O MÉTODO ERASE REMOVE O ELEMENTO DA LISTA
	numeros.insert(it, 4);
	
	numeros.clear();
	cout << "Tamanho da lista: " << numeros.size() << endl << endl;
	
	// MÉTODO EMPTY VERIFICA SE A LISTA ESTÁ VAZIA E RETORNA TRUE OU FALSE
	if(numeros.empty()){
		cout << "lista vazia" << endl;
		system("pause");
		
		// O MÉTODO MERGE MESCLA AS LISTAS E A LISTA USADA PARA MESCLAR FICA VAZIA
		numeros.merge(teste);
	}
	tam = numeros.size();
	for(i=0; i < tam; i++){
		cout << "Elemento da frente: " << numeros.front() << endl;
		numeros.pop_front();
	}
	
	
	
	return 0;
}