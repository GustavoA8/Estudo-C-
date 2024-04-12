#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Digite um numero inteiro:\n";
	cin >> num;
	
	if (num>0){
		cout << "Voce digitou um numero positivo\n";
	}
	else if ( num == 0){
		cout << "Voce digitou o numero zero\n";
	}else{
		cout << "Voce digitou um numero negativo\n";
	}
	
	
	
	
	
	system("pause");
	return 0;
}
