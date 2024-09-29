// STRUCT --> Estrutura	usando array	PARTE 3

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
		cout << "Inimigo: " << name << endl << "Arma: " << gun << endl << "Qtd. Municao: " << (gun == "knife" ? 0 : NumAmmo) << endl << "HP: " << health << endl << endl;
	
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
	// ENEMIES SERÁ UM PONTEIRO 
	enemy *enemies = new enemy[5];
	enemy e1, e2, e3, e4, e5;
	enemies[0] = e1;
	enemies[1] = e2;
	enemies[2] = e3;
	enemies[3] = e4;
	enemies[4] = e5;
	
	
	
	enemies[0].insert("enemy1", "knife", 0, 200);
	enemies[1].insert("enemy2", "pistol", 250,100);
	enemies[2].insert("enemy3", "beretta", 250, 100);
	enemies[3].insert("enemy4", "AWP", 250, 100);
	enemies[4].insert("enemy5", "AK-47", 300, 100);
	
	for(int i = 0; i < sizeof(enemies)-3; i++){
		enemies[i].show();
	}
	
	return 0;
}