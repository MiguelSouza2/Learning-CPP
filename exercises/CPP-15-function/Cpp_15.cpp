// FUNÇÕES PARTE 1

#include <iostream>

using namespace std;
// SE USARMOS A FUNÇÃO SEM DECLARÁ-LA ANTES, HAVERÁ UM ERRO, POR ISSO DEVE-SE APRESENTAR ANTES.
void textoaleatorio();


// FUNÇÃO main() --> principal e retorna 0
int main(){
	// PARA CHAMAR A FUNÇÃO, DEVE-SE APRESENTAR: nome da função e parâmetros (no caso, nenhum)
	textoaleatorio();
	
	return 0;
}

// FUNÇÃO nome --> TIPO void, ou seja, não retorna nada
void textoaleatorio(){
	cout << "um pinguim-imperador vive, em média, de 15 a 20 anos" << endl;
}