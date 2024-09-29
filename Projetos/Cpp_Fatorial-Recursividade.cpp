// EXERCÍCIO FATORIAL COM RECURSIVIDADE
#include <iostream>

using namespace std;

int fatorial(int num);

int main(){
	int val = 4;
	cout << "fatorial = " << fatorial(val) << endl;
	return 0;
}

int fatorial(int num){
	if(num == 0){
		return 1;
	}
	return num * fatorial(num-1);
	 
}