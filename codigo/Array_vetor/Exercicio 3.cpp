#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[2][2], linha, coluna;
	
	cout << "Digite o numero da linha-0 coluna-0: \n";
	cin >> matriz[0][0];
	
	cout << "Digite o numero da linha-0 coluna-1: \n";
	cin >> matriz[0][1];
	
	cout << "Digite o numero da linha-1 coluna-0: \n";
	cin >> matriz[1][0];
	
	cout << "Digite o numero da linha-1 coluna-1: \n";
	cin >> matriz[1][1];
	
	cout << "\nNumeros Digitados: \n";
	
	for(linha = 0;linha < 2;linha++){
		
		for(coluna = 0;coluna < 2;coluna++){
			cout << matriz[linha][coluna] << endl;
		}
		
	}
	cout << "\n----------------------------------------\n";
	cout << "Numeros multiplicados por 2\n";
	
	for(linha = 0;linha < 2;linha++){
		
		for(coluna = 0;coluna < 2;coluna++){
			matriz[linha][coluna] = matriz[linha][coluna] * 2;
			cout << matriz[linha][coluna] << endl;
		}
		
	}
	
	
	
	system("pause");
	return 0;
}
