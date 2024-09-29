// EXERCÍCIO JOGO DA FORCA SIMPLES

#include <iostream>

using namespace std;

int main(){
	char word[30], letter[1], hidden[30];
	int attempts = 6, numhits = 0, i = 0, size = 0;
	bool hits = false;
	
	cout << "Bem-vindo ao jogo da forca! Pressione qualquer botao para começar... " << endl;
	system("pause");
	cout << "Digite a palavra secreta a ser descoberta: ";
	cin >> word;
	
				// \0 É UM FLAG QUE INDICA ONDE ACABOU O STRING
	while(word[i] != '\0'){
		i++;
		size++;
	}
	for(i=0; i < 30; i++){
		hidden[i] = '-';
	}
	while(attempts > 0 && numhits < size){	
		cout << "Numero de acertos: " << numhits << endl;
		cout << "Tentativas restantes: " << attempts << endl;
		cout << "Palavra secreta: ";
		
		for(i=0; i<size; i++){
			cout << hidden[i];
		}
		cout << endl;
		cout << "Digite uma letra: ";
		cin >> letter[0];
		for(i=0; i<size; i++){
			if(word[i] == letter[0]){
				hits = true;
				hidden[i] = word[i];
				numhits++;
			}
		}
		if(!(hits)){
			attempts--;
		}
		hits = false;
		system("cls");
		
		
	}
	if(numhits == size){
			system("cls");
			cout << "Voce venceu!";
		}else{
			cout << "Voce perdeu!";
		}
		
		system("pause");
	
	
	return 0;
}