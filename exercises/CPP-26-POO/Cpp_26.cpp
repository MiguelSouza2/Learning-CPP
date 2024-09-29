// POO --> Programação Orientada a Objetos

#include <iostream>

using namespace std;

// CRISNDO UMA CLASSE CHAMADA gato
class cat{
	// ELEMENTOS PÚBLICOS
	public:
		int vel = 0;
		int velMax;
		string race;
		// INICIALIZANDO O MÉTODO 
		void iniVelMax(int t);	
		string meow();
		
		
	// ELEMENTOS PRIVADOS
	private:
	
	
};

// NO C++, CONSTRUÍMOS OS MÉTODOS FORA DA CLASSE
void cat::iniVelMax(int t){ // raças: [1]siames, [2]curl, [3]munchkin
	if(t == 1){
		this->velMax = 20;
		this->race = "Siamês";
	}else if(t == 2){
		this->velMax = 15;
		this->race = "Curl";
	}else if(t == 3){
		this->velMax = 10;
		this->race = "Munchkin";
	}else{
		this->velMax = 0;
		this->race = "undefined";
	}
}
string meow(){
	cout << "Meow" << endl;
}


int main(){
	// VAMOS ADICIONAR UM OBJETO GATO
	
	// É NECESSÁRIO DEFINIR O OBJETO COMO PONTEIRO NO C++
	// gato *garfield = new gato();
	//					NO C++ USAMOS -> NO LUGAR DO . NA POO
	// cout << "Um gato a: " << garfield->vel << "km/h está miando" << endl << garfield->miar();
	int type;
	cat *youCat = new cat();
	
	cout << "Qual o seu gato? \n\n [1] Siamês \n [2] Curl \n [3] Munchkin \n";
	cin >> type;
	
	youCat->iniVelMax(type);
	
	
	cout << "O seu gato é um: " << youCat->race << " e consegue correr até: " << youCat->velMax;
	
	return 0;
}