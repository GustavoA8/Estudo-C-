#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string nome;
	int idade;
	
	cout << "Digite seu nome: \n";
	getline(cin, nome);
	
	cout << "Digite sua idade: \n";
	cin >> idade;
	
	cout << "------------------------------------\n";
	cout << "Nome: " << nome << "\n";
	cout << "Idade: " << idade << " Anos\n";
	
	system("pause");
	return 0;
}
