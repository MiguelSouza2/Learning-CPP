#include <iostream>

using namespace std;

int fibonacci(int num);

int main(){
	int i, val = 
	
	for(i = 0; i< val; i++){
		cout << "posicao " << i+1 << " = " << fibonacci(i+1) << endl;
	}
	
	return 0;
}

int fibonacci(int num){
	int seq = 1;
	if(num == 1 || num ==2){
		return 1;
	}
	return fibonacci(num-1) + fibonacci(num-2);
}