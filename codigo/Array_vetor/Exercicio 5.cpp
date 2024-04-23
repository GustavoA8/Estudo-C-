#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3], linha, coluna, soma;
	
	for(linha = 0;linha < 3;linha++){
		for(coluna = 0;coluna < 3;coluna++){
			cout << "Digite o numero da linha-" << linha << "  coluna-" << coluna <<endl;
			cin >> matriz[linha][coluna];
		}
	}
	
	cout << "\n-------------------------------------------------\n";
	
	for(linha = 0;linha < 3;linha++){
		for(coluna = 0;coluna < 3;coluna++){
			cout << matriz[linha][coluna] << " ";
		}
		cout << "\n";
	}
	
	cout << "\n-------------------------------------------------\n";
	
	soma = matriz[0][0] + matriz[1][1] + matriz[2][2];
	cout << "A soma dos numero digitados na diagonal é: " << soma << endl;
	
	
	
	system("pause");
	return 0;
}
