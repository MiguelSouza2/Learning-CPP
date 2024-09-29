// SWITCH E CASE

#include <iostream>

using namespace std;

int main(){
	int user;
	cout << "Usuario: \n[1] Alexandre \n[2] Bernardo\n";
	cin >> user;
	cout << endl;
	
	// SELECIONA A VARIÁVEL	
	switch(user){
		// CASE É A CONDIÇÃO
		case 1:
			cout << "Bem-vindo Alexandre!";
		// BREAK INTERROMPE A OPERAÇÃO
		break;
		case 2:
			cout <<"Bem-vindo Bernardo!";
			break;
		// DEFAULT É A RESPOSTA PADRÃO
		default:
			cout << "Usuario incorreto!";
		break;
	}
	
	return 0;
}