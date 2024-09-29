/* ESTRUTURA DE REPETIÇÃO FOR
	for(variavel; condição; variavel++)
*/
#include <iostream>

using namespace std;

int main(){
	int x, cont;
	
	cout << "Até quando iremos contar? ";
	cin >> cont;
	
	for(x=0; x <= cont; x++){
		cout << x << endl;
	}
		
	cout << "Contado ate o numero " << x-1 << endl;
	return 0;
}