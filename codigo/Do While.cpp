#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	
	do{
		cout << "Numero: " << cont << "\n";
		cont++;
	}while(cont < 6);
	
	
	
	
	
	system("pause");
	return 0;
}
