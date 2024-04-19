#include <iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int soma, media;
	int qtde = 0;
	int numero = 1;
	
	while(numero != 0){
		cout << "Digite um numero inteiro: " << endl;
		cin >> numero;
		soma+= numero;
		qtde++;
	}
	qtde--;
	cout << soma;
	media = soma / qtde;
	cout << "------------------------------------------" << endl;
	cout << "A media é: " << media << "\n";

	
	system("pause");
	return 0;
}
