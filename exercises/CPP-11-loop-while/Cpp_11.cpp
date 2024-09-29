// ESTRUTURA DE REPETIÇÃO WHILE

#include <iostream>

using namespace std;

int main(){
	int x, cont = 0;
	
	cout << "Até quando iremos contar? ";
	cin >> x;
	
	while(cont <= x){
		cout << cont << endl;
		cont++;
	};
	
	cout << "Contado ate o numero " << cont-1 << endl;
	return 0;
}