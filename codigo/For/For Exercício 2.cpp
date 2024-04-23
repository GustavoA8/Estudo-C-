#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont, numero;
	int par = 0;
	int impar = 0;
	
	for(cont=1;cont<11;cont++){
		cout << "Digite um numero: " << cont << endl;
		cin >> numero;
		
		if (numero % 2 == 0){
			par++;
		}else{
			impar++;
		}
	}
	
	cout << "-------------------------------\n";
	cout << "Voce digitou " << par << " numeros pares\n";
	cout << "Voce digitou " << impar << " numeros impares\n";
	
	
	system("pause");
	return 0;
}
