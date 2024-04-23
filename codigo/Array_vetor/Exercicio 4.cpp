#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[5], cont;
	bool verificador = false;
	
	for(cont = 0;cont < 5;cont++){
		cout << "Digite o " << cont+1 << " numero\n";
		cin >> vetor[cont];
	}
	
	cout <<"\n---------------------------------------------\n";;
	
	cout << "Dos numeros digitados os maiores que " << vetor[0] << " são: \n";
	for(cont = 1;cont < 5;cont++){
		if (vetor[0] < vetor[cont]){
			cout << "Numero: " << vetor[cont] << endl;
			verificador = true;
		}
	}
	if( verificador == true){
			verificador = false;
	}else{
			cout << "Nenhum numero digitado é maior que " << vetor[0] << endl;
		}
	
	cout <<"\n---------------------------------------------\n";
	
	cout << "Dos numeros digitados os menores que " << vetor[0] << " são: \n";
	for(cont = 1;cont < 5;cont++){
		if (vetor[0] > vetor[cont]){
			cout << "Numero: " << vetor[cont] << endl;
			verificador = true;
		}
	}
	if( verificador == true){
			verificador = false;
	}else{
			cout << "Nenhum numero digitado é menor que " << vetor[0] << endl;
		}
	
	cout <<"\n---------------------------------------------\n";
	
	cout << "Dos numeros digitados os iguais que " << vetor[0] << " são: \n";
	for(cont = 1;cont < 5;cont++){
		if (vetor[0] == vetor[cont]){
			cout << "Numero: " << vetor[cont] << endl;
			verificador = true;
		}
	}
	if( verificador == true){
			verificador = false;
	}else{
			cout << "Nenhum numero digitado é igual a " << vetor[0] << endl;
		}
	
	
	
	system("pause");
	return 0;
}
