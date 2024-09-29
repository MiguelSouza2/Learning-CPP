// STRUCT --> Estrutura		PARTE 2

#include <iostream>

using namespace std;

struct enemy{
	string name;
	string gun;
	int NumAmmo;
	int health;
	
	// MÉTODOS 	
	void insert(string setName, string setGun, int setNumAmmo, int setHealth){
	name = setName;
	gun = setGun;
	NumAmmo = setNumAmmo;
	health = setHealth;
	}
	
	void show(){
		cout << "Inimigo: " << name << endl << "Arma: " << gun << endl << "Qtd. Municao: " << (gun == "knife" ? 0 : NumAmmo) << endl << "HP: " << health << endl;
	
	}
	
	void shot(){
		if(NumAmmo > 0){
			cout << "Pow!" << endl;
		}else{
			cout << "Out of ammo!" << endl;
		}
	}
};

int main(){
	enemy e1;
	
	e1.insert("enemy1", "knife", 0, 100);
	
	e1.show();
	
	return 0;
}