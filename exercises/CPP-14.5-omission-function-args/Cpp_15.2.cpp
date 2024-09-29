// OMISSSÃO DE PARÂMETROS E ARGUMENTO PADRÃO
// FUNÇÕES PARTE 3

#include <iostream>

using namespace std;

// ESSE É O VALOR PADRÃO (DEFAULT)
void text(string t = "");

int main(){
	text();
	return 0;
}

void text(string t){
	cout << "O comprimento de uma baleia jubarte varia de 15-16m de uma fêmea adulta e 13-14m de um macho adulto" << endl;
}