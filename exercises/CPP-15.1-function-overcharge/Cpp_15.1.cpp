// SOBRECARGA DE FUNÇÕES --> duas funções com o mesmo nome
// FUNÇÕES PARTE 2
#include <iostream>

using namespace std;

void soma();
void soma(int n1, int n2);

int main(){
	soma(20, 50);
	
	
	return 0;
}

void soma(){
	int n1 = 10, n2 = 20, res;
	res = n1 + n2;
	
	cout << n1 << " + " << n2 << " = " << res << endl;

}


void soma(int n1, int n2){
	int	res;
	res = n1 + n2;
	
	cout << n1 << " + " << n2 << " = " << res << endl;

}