// STRUCT --> Estrutura		PARTE 1

#include <iostream>

using namespace std;

// STRUCT É PARA DEFINIR UM OBJETO, NO CASO, ANIMAL
struct animal{
	string nome;
	string especie;
	int qtdPatas;
	int idade;
};

int main(){
	// gato é do "tipo" animal, contendo as propriedades já definidas
	animal gato;
	
	gato.nome = "Tom";
	gato.especie = "Gatinho";
	gato.qtdPatas = 4;
	gato.idade = 12;
	
	cout << "Gato: " << endl;
	
	cout << "Nome: " << gato.nome << endl;
	cout << "Especie: " << gato.especie << endl;
	cout << "Quantidade de patas: " << gato.qtdPatas << endl;
	cout << "Idade: " << gato.idade << endl;
	
	animal cachorro;
	
	cachorro.nome = "Rex";
	cachorro.especie = "Pitbull";
	cachorro.qtdPatas = 4;
	cachorro.idade = 15;
	
	cout << "\nCachorro: " << endl;
	
	cout << "Nome: " << cachorro.nome << endl;
	cout << "Especie: " << cachorro.especie << endl;
	cout << "Quantidade de patas: " << cachorro.qtdPatas << endl;
	cout << "Idade: " << cachorro.idade << endl;
	
	return 0;
}