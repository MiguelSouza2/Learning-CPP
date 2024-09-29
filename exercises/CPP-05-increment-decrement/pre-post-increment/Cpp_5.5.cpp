// INCREMENTO PÓS-FIXADO E PRÉ-FIXADO

#include <iostream>

using namespace std;

int main(){
	int n1 = 10;
	
	// USA A VARIÁVEL PRIMEIRO E DEPOIS INCREMENTA O VALOR
	cout << "Pós-fixado: " << n1++ << endl;
	system("pause");
	// INCREMENTA O VALOR PRIMEIRO E DEPOIS USA
	cout << "Pré-fixado: " << ++n1 << endl;
	
	return 0;
}