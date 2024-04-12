#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string letra, msg;
	
	cout << "Digite uma letra: \n";
	cin >> letra;
	
	(letra == "a") ? msg = "Digitou a letra A\n" : msg = "Nao digitou a letra A\n";
	
	cout << msg;
	
	
	
	system("pause");
	return 0;
}
