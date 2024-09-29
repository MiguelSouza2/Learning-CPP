// FUNÇÃO SYSTEM:
// EXECUTA FUNÇÕES DO SISTEMA COMO: pause, cls, dir...
#include <iostream>
#include <stdio.h>3

using namespace std;

int main(){
	string something;
	
	// MUDA A COR DE FUNDO PARA 0 (PRETO) E DAS LETRAS PARA 2 (VERDE-ESCURO)
	system("color 02");
	cout << "Digite algo..." << "\n";
	cin >> something;
	
	system("echo Você disse: ");
	cout << something << endl;
	// PARA PAUSAR AS OPERAÇÕES NO SISTEMA
	system("pause");
	// PARA LIMPAR O PROMPT DE COMANDO
	system("cls");
	// PARA EXIBIR TODOS OS DIRETÓRIOS NO LOCAL
	system("dir");
	system("cls");
	system("pause");	
	// EXIBINDO A "ÁRVORE DE DIRETÓRIOS" DA PASTA ATUAL
	system("tree");
	return 0;
}