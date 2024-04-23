#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, contador, resultado;
	
	cout << "Informe o numero da tabuada que deseja ver: \n";
	cin >> numero;
	
	if (numero > 0 && numero < 11){
		for (contador=1;contador<11;contador++){
			
			resultado = numero*contador;
			cout << numero << " X " << contador << " = " << resultado << endl;
		}
	}
	
	
	
	system("pause");
	return 0;
}
