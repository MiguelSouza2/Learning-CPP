// CRIANDO VARIÁVEIS

#include <iostream>;

using namespace std;

int main(){
	//DECLARANDO A VARIÁVEL
	
	//TIPO, NOME DA VARIÁVEL E VALOR INICIAL
	
	char inicial = 'Z'; // caracter único
	char letras[4] = {'a', 'b', 'c', 'd'}; // até 20 caracteres;
	
	string nome = "Ze Roberto"; // texto
	int idade = 25; // valores inteiros
	float decimal1; // resultados decimais mais imprecisos; 2,5
	double decimal2; // resultados decimais mais precisos; 2,4999999...
	bool casado = true; // valores true ou false, ou seja, 1 ou 0
	
	cout << "O usuario " << nome << " idade: " << idade << ", e casado?\n " << casado << endl;
	
	system("pause");
	
	decimal1 = 4/3;
	decimal2 = 4/3;
	
	cout << letras[2] << endl << decimal1 << endl << decimal2 << endl;
	return 0;
}