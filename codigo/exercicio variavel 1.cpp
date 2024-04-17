#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double valorHora, horaMes, totalReceber;
	
	cout << "Quanto voce ganha por hora? \n";
	cin >> valorHora;
	cout << "Quantas horas voce trabalha por mes? \n";
	cin >> horaMes;
	
	totalReceber = valorHora * horaMes;
	
	
	cout << "-------------------\n";
	cout << "Voce tem que receber\n";
	cout << "R$ "<< totalReceber << "\n";
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
