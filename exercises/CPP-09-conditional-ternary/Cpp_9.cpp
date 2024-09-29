// OPERADOR TERNÁRIO

#include <iostream>

using namespace std;

int main(){
	char opc;
	// (expressão) ? "sim" : "não"
	cout << "Voce tem mais que 18 anos? (s/n): ";
	cin >> opc;
	cout << endl << (opc == 's') ? "1" : "0"; 
	
	return 0;
}