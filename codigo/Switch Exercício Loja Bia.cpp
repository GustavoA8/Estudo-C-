#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	double valorAPagar;
	int codigo;
	
	cout << "Qual o valor total a pagar?\n";
	cin >> valorAPagar;
	
	cout << "Qual o seu codigo?\n1-Cliente Comum\n2-Funcionario\n3-Cliente Vip\n";
	cin >> codigo;
	
	switch(codigo){
		case 1:
			valorAPagar = valorAPagar;
			break;
			
		case 2:
			valorAPagar -= valorAPagar * 0.10;
			break;
			
		case 3:
			valorAPagar -= valorAPagar * 0.05;
			break;
	}
	
	cout << "\n---------------------------------\n";
	cout << "Valor a pagar: " << valorAPagar << endl;
	
	
	
	
	
	
	system("pause");
	return 0;
}
