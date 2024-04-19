#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, qtde, cont;
	
	cout << "Digite um numero inteiro positivo: \n";
	cin >> qtde;
	
	do{
		if ( cont % 2 == 1){
			cout << cont << endl;
			numero++;
		}
		cont++;
	} while (numero < qtde);
	
	
	
	
	system("pause");
	return 0;
}
