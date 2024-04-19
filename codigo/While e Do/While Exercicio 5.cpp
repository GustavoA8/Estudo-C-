#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, quadrado;
	
	cout << "Digite um numero: " << endl;
	cin >> num;
	
	while( num != 0){
		quadrado = num*num;
		
		cout << "O quadrado desse numero é " << quadrado << endl;
		cout << "-------------------------------------\n";
		
		cout << "Digite um numero: " << endl;
	    cin >> num;
	}
	cout << "Fim do codigo" << endl;
	
	
	
	
	system("pause");
	return 0;
}
