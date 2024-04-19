#include <iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int contador;
	int contador2 = 10;
	
	while (contador < 11){
		cout << contador << endl;
		contador++;
	}
	while(contador2 != 0){
		cout << contador2 << endl;
		contador2--;
	}
//	---------------------------------------------------

    int qtdeVezes;
    double nota, media, soma;
    
    soma = 0;
    qtdeVezes = 1;
    
    while (qtdeVezes <= 4){
    	
    	cout << "Digite a nota " << qtdeVezes << endl;
    	cin >> nota;
    	
    	soma+=nota;
    	qtdeVezes++;
	}
	
	cout << "\n\n";
	media = soma / 4;
	
	cout << "A media é: " << media << "\n";
	
	system("pause");
	return 0;
}
