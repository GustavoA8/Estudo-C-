#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[5], cont;
	
	for (cont = 0;cont < 5;cont++){
		
		cout << "Digite o " << cont + 1 << " numero: \n";
		cin >> vetor[cont];
	}
	
	cout << "\n--------------------------------------\n";
	
	for (cont = 4;cont >= 0;cont--){
		cout << vetor[cont] << endl;
	}
	
	
	system("pause");
	return 0;
}
