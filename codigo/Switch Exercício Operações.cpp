#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double num1, num2;
	int operacao;
	
	cout << "Digite um numero:\n";
	cin >> num1;
	
	cout << "Digite um numero:\n";
	cin >> num2;
	
	cout << "Qual operação voce quer realizar:\n";
	cout << "1-Adição\n2-Subtração\n3-mutiplicação\n4-divisão\n";
	cin >> operacao;
	
	switch (operacao){
		case 1:
			cout <<"Soma: " << num1 + num2 << endl;
		break;
		case 2:
			cout << "Subtração: " << num1 - num2 << endl;
		break;
		case 3:
			cout << "Multiplicação: " << num1 * num2 << endl;
		break;
		case 4:
			cout << "Divisão: " << num1 / num2 << endl;
		   break;
	}  
	
	
	system("pause");
	return 0;
}
