// FUNÇÕES RECURSIVAS --> função chama a si mesma
// FUNÇÕES PARTE 4

#include <iostream>

using namespace std;

void cont(int num, int c = 0);

int main(){
	cont(10);
	return 0;
}

void cont(int num, int c){
	cout << "c = " << c << endl;
	if(num > c){
		// CHAMA A FUNÇÃO DE CONT DE NOVO, ATÉ SATISFAZER A CONDIÇÃO
		cont(num, ++c);
	}
}