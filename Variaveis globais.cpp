#include <iostream>
#include <locale.h>

using namespace std;

double nota1VG, nota2VG;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double nota3VL, nota4VL, media;
	
	nota1VG = 9;
	nota2VG = 5;
	nota3VL = 5;
	nota4VL = 8;
	
	media = (nota1VG + nota2VG + nota3VL + nota4VL)/4 ;
	
	cout << "Média: " << media <<"\n";
	
	
	system("pause");
	
	return 0;
}
