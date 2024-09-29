// ENUMERAÇÃO --> enum
//    |-> RETORNA APENAS VALORES NUMÉRICOS

#include <iostream>

using namespace std;

int main(){
	enum nome{
		Robson = 10,
		Leandro = 20,
		Edson = 4,
		Felipe = 100 
	};
	
// [lista] [Seleção do tipo (lista) 
// nomeSel É DO TIPO nome -> enum
	nome nomeSel;
	
	nomeSel = Felipe;
	
	cout << nomeSel << endl;
	
	return 0;
}