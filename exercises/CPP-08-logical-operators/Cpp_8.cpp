/* OPERADORES LÓGICOS
	AND &&
	OR ||
	NOT !
*/
#include <iostream>

using namespace std;

int main(){
	
	// EXEMPLO &&
	int res1, res2;
	
	cout << "Quanto é 1 + 1? ";
	cin >> res1;
	cout << "Quanto é 2 * 4? ";
	cin >> res2;
	
	if(res1 == 2 and res2 == 8){
		cout << endl << "Voce acertou as duas!";
	}else{
		cout << endl << "Voce errou algo...";
	}
	
	cout << endl;
	
	// EXEMPLO ||
	string user;
	
	cout << "Usuario: ";
	cin >> user;
	
	if (user == "Miguel" or user == "Iruam"){
		cout << endl << "Bem-vindo " << user << "!";
	}else{
		cout << endl << "Usuario incorreto!";
	}
	cout << endl;
	
	// EXEMPLO !
	string frase;
	
	cout << "Digite C++: ";
	cin >> 	frase;
	
	if(not (frase == "C++")){
		cout << "Incorreto!";
	}else{
		cout << "Correto!";
	}
}