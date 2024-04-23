#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont, numero;
	int total = 1;
	
	cout << "Digite o numero que deseja saber o fatorial: " << endl;
	cin >> numero;
	
	for (cont = 1;cont <= numero;cont++){
		
		total = total * cont; 
	}
	cout << "O resultado é:\n" << total << endl;
	
	system("pause");
	return 0;
}
