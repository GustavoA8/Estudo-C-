#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][3], linha, coluna;
	bool verificar = false;
	
	for(linha = 0;linha < 3;linha++){
		for(coluna = 0;coluna < 3;coluna++){
			cout << "Digite o numero da linha-" << linha << " coluna-" << coluna << endl;
			cin >> matriz[linha][coluna];
		}
	}
	
	cout << "\n---------------------------------------------------\n";
	cout << "Numeros Digitados Maiores que 5: \n";
	
	for(linha = 0;linha < 3;linha++){
		for(coluna = 0;coluna < 3;coluna++){
			if(matriz[linha][coluna] > 5){
				cout << matriz[linha][coluna] << " ";
				verificar = true;
			}
			
		}
	}
	if(verificar == false){
		cout << "Nenhum numero digitado é maior que 5 !!!";
	}
	cout << "\n\n";
	
	
	
	
	system("pause");
	return 0;
}
