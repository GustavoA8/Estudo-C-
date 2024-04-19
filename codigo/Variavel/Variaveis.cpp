#include <iostream>
/*
Iostream é uma biblioteca
I - vem de input
O - vem de output
*/

#include <locale.h>

using namespace std;



/*
Todo programa em c++ tem uma e somente uma função principal que é a função MAIN
*/

int main(){
	
	setlocale(LC_ALL, "");

	
	//variaveis
	int numerosInteiro = 3;
	double numerosComCasasDecimais = 9.99;
	char letra = 'a';
	const char* letras = "abcdefg";
	string textos = "Aluno: Gustavo";
	bool verdadeiroFalso = true;
	
	cout << numerosInteiro << "\n";
	cout << numerosComCasasDecimais << "\n";
	cout << letra << "\n";
	cout << letras <<"\n";
	cout << textos << "\n";
	cout << verdadeiroFalso << "\n";
	
	
	
	
	return 0;
	
}
