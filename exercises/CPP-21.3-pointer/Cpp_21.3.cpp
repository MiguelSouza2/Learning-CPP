// PONTEIRO PARTE 3

#include <iostream>

using namespace std;

void soma(float *var, float value);
void ini(float *v);

int main(){
	float num = 0;
	float vetor[5];
	// ELE SEMPRE VAI RETORNAR 0 POIS AS VARIÁVEIS ESTÃO EM ESCOPOS DIFERENTES
	//	soma(num, 15);
	
	// COM AMBAS NO MESMO ESCOPO, PODEMOS USÁ-LAS SEM PROBLEMAS
	// CHAMAMOS A FUNÇÃO soma E PASSAMOS OS PARÂMETROS (ENDEREÇO DE num E 15)
	soma(&num, 15);
	
	cout << num << endl;
	
	ini(vetor);
	
	for(int i = 0; i < 5; i++){
		cout << vetor[i] << endl; 
	};
	
	return 0;
}

void soma(float *var, float value){
	*var+= value;
}

// EU ATRIBUO VALORES AO MEU VETOR ATRAVÉS DAS POSIÇÕES RECEBIDAS PELO PONTEIRO. ISSO SÓ É POSSÍVEL POIS ESTÃO NO MESMO ESCOPO
void ini(float *v){
	v[0] = 1;
	v[1] = 2;
	v[2] = 3;
	v[3] = 4;
	v[4] = 5;
}