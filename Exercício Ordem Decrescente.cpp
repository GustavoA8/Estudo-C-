#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double num1, num2, num3, primeiro, segundo, x, terceiro;
	string msg;
	
	cout << "Digite um numero:\n";
	cin >> num1;
	
	cout << "Digite um numero:\n";
	cin >> num2;
	
	cout << "Digite um numero:\n";
	cin >> num3;
	
	primeiro = num1;
	segundo = num2;
	terceiro = num3;
	
	if (primeiro < segundo){
		
		x = primeiro;
		primeiro = segundo;
		segundo = x;
		
		
	}
	if(terceiro > segundo){
		
		x = segundo;
		segundo = terceiro;
		terceiro = x;
		
		
		
	}
	if (segundo > primeiro){
		
		x = primeiro;
		primeiro = segundo;
		segundo = x;

	}
	
	cout << primeiro << " > " << segundo << " > " << terceiro << "\n";
	
	
	system("pause");
	return 0;
}
