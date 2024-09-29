// ESTRUTURA DE REPETIÇÃO DO WHILE

#include <iostream>

using namespace std;

int main(){
	int x, cont = 0;
	
	cout << "Até quando iremos contar? ";
	cin >> x;
	
	// EXECUTA O BLOCO DE COMANDOS PELO MENOS UMA VEZ
	do{
		cout << cont << endl;
		cont++;
	}while(cont <= x);
	
	cout << "Contado ate o numero " << cont << endl;
	return 0;
}