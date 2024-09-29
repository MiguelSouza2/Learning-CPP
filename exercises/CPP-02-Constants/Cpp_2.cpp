// MÚLTIPLAS VARIÁVEIS E CONSTANTES

#include <iostream>

using namespace std;

// CONSTANTES
const string nome = "Alex";
#define pi 3.14159265
#define welcome cout << "Seja bem-vindo!"

int main(){
	cout << "Multiplas variaveis: \n";
	// MÚLTIPLAS VARIÁVEIS
	int vidas = 3, tiros = 100, life = 100;
	
	// nome = "Bruno"; ISSO NÃO FUNCIONARÁ POIS CONSTANTES NÃO TEM SEUS VALORES ALTERADOS
	
	cout << vidas << endl << tiros << endl << life << endl << endl << "Constantes: \n" << nome << endl << pi << endl;
	system("pause");
	cout << "Executando um comando com constantes: ";
	welcome;
	
	return 0;
}