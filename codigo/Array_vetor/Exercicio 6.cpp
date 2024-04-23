#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
int matriz[3][3], linha, coluna;
	
	for(linha = 0;linha < 3;linha++){
		for(coluna = 0;coluna < 3;coluna++){
			cout << "Digite o numero da linha-" << linha << " coluna-" << coluna << endl;
			cin >> matriz[linha][coluna];
		}
	}
	
	cout << "\n---------------------------------------------------\n";
	cout << "Numeros Digitados: \n";
	for(linha = 0;linha < 3;linha++){
		for(coluna = 0;coluna < 3;coluna++){
			cout << matriz[linha][coluna] << " ";
		}
		cout << "\n";
	}
	
	cout << "\n---------------------------------------------------\n";
	cout << "Numeros Digitados Multiplicados por 2: \n";
	for(linha = 0;linha < 3;linha++){
		for(coluna = 0;coluna < 3;coluna++){
			matriz[linha][coluna] = matriz[linha][coluna] * 2;
			cout << matriz[linha][coluna] << " ";
		}
		cout << "\n";
	}
	
	
	
	
	system("pause");
	return 0;
}
