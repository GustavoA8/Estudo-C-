#include <iostream>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0;
	int intervalo = 0;
	int intervalo2 = 0;
	int intervalo3 = 0;
	int intervalo4 = 0;
	
	while ( num >= 0){
		cout << "Digite um numero inteiro positivo: " << endl;
		cin >> num;
		cout << intervalo2;
		if(num < 0 ){
			break;
		}
		if (num <= 10){
			intervalo++;
		}else if (num <= 20){
			intervalo2++;
		}else if (num <= 30){
			intervalo3++;
		}else{
			intervalo4++;
		}
	}
	cout << "\n-----------------------------------------------\n";
	cout << "[0-10] - " << intervalo << endl;
	cout << "[11-20] - " << intervalo2 << endl;
	cout << "[21-30] - " << intervalo3 << endl;
	cout << "[31-40] - " << intervalo4 << endl;
	
	system("pause");
	return 0;
}
