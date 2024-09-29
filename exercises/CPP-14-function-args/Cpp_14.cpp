// ARGUMENTOS DA FUNÇÃO MAIN: ARGC E ARGV

#include <iostream>
// INCLUIR A FUNÇÃO strcmp PARA COMPARAÇÃO DE DUAS STRINGS --> retorna -1, 1 e 0
#include <string.h>>
using namespace std;

// argc --> quantidade de parâmetros passados
// argv --> ponteiro * de uma matriz char

int main (int argc, char *argv[]){
	// POR PADRÃO, O PRIMERIRO ARGUMENTO PASSADO É O NOME DO PROGRAMA
	//cout << argv[1] << "\n\n";

	//	NA POSIÇAO 1 ELE IRÁ PEGAR O VALOR PASSADO. POR EXEMPLO: "cpp_14 yt", irá retornar "yt"
	// cout << argv[1] << "\n\n";
	// cout << argc << endl;
	// system("pause");
	
	
	// VERIFICAR SE O PARÂMETRO FOI PASSADO
	if(argc > 1){
		// se o parâmetro argv[1] for "sol", a comparação retorna 0 pois os dois parâmetros são iguais, mas como nega, a comparação é diferente de 0
		if(!strcmp(argv[1], "sol")){
			cout << "ta quente" << endl;
		}else if(!strcmp(argv[1], "nublado")){
			cout << "ta nublado" << endl;
		}else if(!strcmp(argv[1], "chuvendo")){
			cout << "ta chovendo" << endl;
		}else{
			cout << "parametro estranho" << endl;
		}
	}
	system("pause");
	return 0;
}