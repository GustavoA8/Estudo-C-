#include <iostream>
#include <locale.h>

using namespace std;

double nota1, nota2;


int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double nota3, nota4, media;
	string nome;
	
	cout << "Digite o seu nome: ";
	getline(cin, nome);
	
	cout << "Digite a nota 1: ";
	cin >> nota1;
	
	cout << "Digite a nota 2: ";
	cin >> nota2;
	cout << "Digite a nota 3: ";
	cin >> nota3;
	cout << "Digite a nota 4: ";
	cin >> nota4;
	
	media = (nota1 + nota2 + nota3 + nota4)/4;
	
	cout << "Aluno: " << nome << "\n";
	cout << "Media: " << media << "\n";
	
	
	system("pause");
	return 0 ;
	
	
}
