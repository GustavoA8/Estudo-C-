#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[5], cont;
	bool verificar = false;
	
	for (cont = 0;cont < 5;cont++){
		cout << "Digite o " << cont + 1 << "° valor: \n";
		cin >> vetor[cont];
	}
	
	cout << "---------------------------------------\n";
	cout << "Numeros impares digitados: \n";
	
	for (cont = 0;cont < 5;cont++){
		if(vetor[cont] % 2 == 1){
			cout << "Numero: " << vetor[cont] << endl;
			verificar = true;	
		}
	}
	if (verificar == false){
		cout << "Nenhum numero impar digitado !!! \n\n";
	}
	
	
	system("pause");
	return 0;
}
