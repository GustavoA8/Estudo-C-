#include <iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador = 6;
	
	while (contador < 100){
		
		cout << "Numero: " << contador << endl;
		
		if( contador == 5){
			break;
		}
		
		
		contador++;
	
	}
	
	system("pause");
	return 0;
}
