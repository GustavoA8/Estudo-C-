#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double hora, mes, salario, ir, inss, sindicato, descontos, salarioLiquido;
	
	cout << "Quanto voce ganha por hora? \n";
	cin >> hora;
	cout << "Quantas horas voce trabalha no mes? \n";
	cin >> mes;
	
	salario = hora * mes;
	ir = salario * 0.11;
	inss = salario * 0.08;
	sindicato = salario * 0.05;
	descontos = ir + inss + sindicato;
	salarioLiquido =  salario - descontos;
	
	cout <<"---------------------------------\n";
	cout << "Salario Bruto : R$" << salario << "\n";
	cout << "IR (11%) : R$" << ir << "\n";
	cout << "INSS (8%) : R$" << inss << "\n";
	cout << "Sindicato (5%) : R$" << sindicato << "\n";
	cout << "Salario Liquido : R$" << salarioLiquido << "\n";
	
	
	
	
	
	
	system("pause");
	return 0;
}
