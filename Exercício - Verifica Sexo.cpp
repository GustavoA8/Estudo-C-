#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string letra;
	
	cout << "Digite uma letra:\n";
	cin >> letra;
	
	(letra == "f" || letra == "F") ? cout << "Feminino\n":(letra == "m" || letra == "M") ? cout << "Masculino\n":cout << "Sexo Invalido\n";
	
	
	
	
	system("pause");
	return 0;
}
