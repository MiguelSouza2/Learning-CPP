// INVERSÃO DE VALORES DE VARIÁVEIS

#include <iostream>

using namespace std;

int main(){
	int num = -10;
	cout << "Valor inicial: " << num << endl;
	
	//INVERSÃO:
	//  cout << "Valor final: " << -num;
	//  num = num * -1;
	//  num = -num;
		num *= -1;
	cout << "Valor final: " << num;
	return 0;
}
