/* OPERADORES MATEMÁTICOS: 
	soma +
	subtração - 
	multiplicação * 
	divisão /
	resto da divisão %
 */
#include <iostream>

using namespace std;

#define pi 3.1415

int main(){
	double radius, result;
	
	cout << "Calcular area do circulo! \n";
	cout << "Digite o valor do raio: ";
	cin >> radius;
	
	result = pi * (radius * radius);
	cout << "Resultado da area: " << result;
	
	return 0;
}