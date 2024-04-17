#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double num1, num2, num3, resul1, resul2, resul3;
	
	cout<< "Escreve o primeiro numero: \n";
	cin >> num1;
	cout << "Escreve o segundo numero: \n";
	cin >> num2;
	cout << "Escreve o terceiro numero: \n";
	cin >> num3;
	
	resul1 = (num1*2) + (num2/2);
	resul2 = (num1*3) + num3;
	resul3 = num3 * 2;
	
	cout << "------------------------";
	cout << "1) " << resul1 << "\n";
	cout << "2) " << resul2 << "\n";
	cout << "3) " << resul3 << "\n";
	
	
	
	system("pause");
	return 0;
}
