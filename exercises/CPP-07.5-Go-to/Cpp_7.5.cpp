// COMANDO GO TO

#include <iostream>
// BIBLIOTECA PARA USAR COMANDOS DO SISTEMA
#include <cstdlib>

using namespace std;

int main(){
	int num1, num2, res;
	char opc;
	inicio:
	// LIMPAR A TELA
	
	system("cls");
	
	cout << "Digite uma nota: ";
	cin >> num1;
	cout << "Digite outra nota: ";
	cin >> num2;
	res = (num1 + num2) /2;
	
	/*
		RES >= 6 		APROVADO
		RES >= 4 < 6 	RECUPERAÇÃO
		RES < 4 		REPROVADO
	*/
	if(res >= 6){
		cout << endl << "Aprovado";
	}else if(res >= 4 && res < 6){
		cout << endl << "Recuperacao";
	}
	
	else{
		cout << endl << "Reprovado";
	}
	
	cout << endl << "Digitar outras nota? (s/n): ";
	cin >> opc;
	
	if(opc == 's' || opc == 'S'){
		goto inicio;
		
	}
	
	
	return 0;
}