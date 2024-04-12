#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double num1, num2, num3, maior, menor;
	
	cout << "Digite um numero:\n";
	cin >> num1;
	
	cout << "Digite um numero:\n";
	cin >> num2;
	
	cout << "Digite um numero:\n";
	cin >> num3;
	
	if ( num1 > num2 ){
		maior = num1;
		menor = num2;
	}else {
		maior = num2;
		menor = num1;
	}
	if(maior < num3){
		maior = num3;
	}else if (menor > num3){
		menor = num3;
	}
	
	cout << "---------------------------------------------\n";
	cout << "Maior: " << maior << "\n";
	cout << "Menor: " << menor << "\n";
	
	
	system("pause");
	return 0;
}
