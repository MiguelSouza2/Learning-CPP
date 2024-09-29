// ARRAY / VETOR

#include <iostream>

using namespace std;

int main(){
//	nome do array [posições de 0 a x]
	int x, array[10];
	
	for(x=0; x<10; x++){
	cout << "Digite um valor para a posicao " << x << ": ";
	cin >> array[x];
	}
	for(x=0; x<10; x++){
		cout << "array posicao " << x << ": " << array[x] << endl;
	}	
	return 0;
}