/* MATRIZES
	|> ARRAYS BIDIMENSIONAIS			 [array [ 1, 2, 3],]
						   |>	matriz = [array [ 1, 2, 3],]
										 [array [ 1, 2, 3] ];
									
*/
#include <iostream>

using namespace std;

int main(){
	int x, y, cont, matriz [3][3];
	
	for(x=0, cont = 0; x < 3; x++){
		// x VAI DE 0 - 2
		// cont VAI DE 0 - 2 no primeiro loop
		// cont VAI DE 3 - 5 no segundo loop
		// cont VAI DE 6 - 8 no terceiro loop
		
		for(y=0; y < 3; cont++, y++){
			// y VAI DE 0 - 2
			
			matriz[x][y] = cont;	
			cout << matriz [x][y] << "; ";
		}
		cout << endl;
	}
	
	return 0;
}