#include <iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	while(numero != 1 && numero != 5){
		cout << "Digite um numero inteiro: " << endl;
		cin >> numero;
	}
	cout << "\nSaiu da rotina\n";

	
	system("pause");
	return 0;
}
