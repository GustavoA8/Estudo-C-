#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3, soma;
	
	cout << "Digite o primeiro numero: \n";
	cin >> num1;
	
	cout << "Digite o segundo numero: \n";
	cin >> num2;
	
	cout << "Digite o terceiro numero: \n";
	cin >> num3;
	
	soma = num1 + num2 + num3;
	
	cout << "A soma dos numeros é : " << soma << "\n";
	
	system("pause");
	return 0;
}
