#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero1;
	
	numero1 = 10;
	
	cout <<"-------valor inicial--------\n";
	cout << "Numero: " << numero1 << "\n";
	
	
	numero1*=2;
	cout << "Numero: " << numero1 << "\n";
	
	numero1/=2;
	
	cout <<"-------valor dividido por 2--------\n";
	cout << "Numero: " << numero1 << "\n";
	
	//------------------POS fixado------------------------
	
	numero1 = 100;
	
	cout << "\n ----------Pos Fixado------------- \n";
	cout << "Numero = 100 \n";
	cout << "Numero = " << numero1++ << "\n";
	cout << "Numero = " << numero1 << "\n";
	
	//------------------Pre fixado------------------------
	
	numero1 = 100;
	
	cout << "\n ----------Pre Fixado------------- \n";
	cout << "Numero = 100 \n";
	cout << "Numero = " << ++numero1 << "\n";
	
	
	
	system("pause");
	return 0;
	
}
