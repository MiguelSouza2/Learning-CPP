// INCREMENTO E DECREMENTO DE VARIÁVEIS
// +=  -=  *=  /=

#include <iostream>

using namespace std;

int main(){
	int n1 = 3, n2 = 4;
	// INCREMENTO
	cout << "Antes do incremento: " << n1 << endl << endl;
	
	n1 = n1 + 1; // ou n1+= 1 ou n1++
	
	cout << "Depois do incremento: " << n1 << endl << endl;
	system("pause");
	// DECREMENTO
	cout << "Antes do decremento: " << n2 << endl << endl;
	
	n2 = n2 - 1; // ou n2-= 1 ou n2--
	
	cout << "Depois do decremento: " << n2;
	return 0;
}