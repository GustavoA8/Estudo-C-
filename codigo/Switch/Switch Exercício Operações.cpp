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
	
	cout << "Qual opera��o voce quer realizar:\n";
	cout << "1-Adi��o\n2-Subtra��o\n3-mutiplica��o\n4-divis�o\n";
	cin >> operacao;
	
	switch (operacao){
		case 1:
			cout <<"Soma: " << num1 + num2 << endl;
		break;
		case 2:
			cout << "Subtra��o: " << num1 - num2 << endl;
		break;
		case 3:
			cout << "Multiplica��o: " << num1 * num2 << endl;
		break;
		case 4:
			cout << "Divis�o: " << num1 / num2 << endl;
		   break;
	}  
	
	
	system("pause");
	return 0;
}
