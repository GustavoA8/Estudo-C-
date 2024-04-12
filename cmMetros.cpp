#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	double metros, cm;
	
	cout << "Digite um comprimento em metros: \n";
	cin >> metros;
	
	cm = metros * 100;
	
	cout << "\n-----------------------------------------------\n";
	cout << metros <<" metros em centimetros é: " << cm << "\n";
	
	
	system("pause");
	return 0;
}
