#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	if (7 < 4){
		cout << "----------- Resultado IF-------------\n";
		cout << "Verdadeiro\n";
	}
	else{
		cout << "----------- Resultado IF-------------\n";
		cout << "Falso\n";
	}
	
	
	
	
	
	system("pause");
	return 0;
}
