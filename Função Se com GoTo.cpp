#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string pais;
	
	//Para indicar o recomecar é um label coocamos os dois pontos final
	recomecar:
	
	cout <<"Qual pais vai ganhar a Copa do Mundo? \n";
	cin >> pais;
	
	//if =se
	if(pais == "Brasil"){
		
		cout << "Muto bem! O Brasil vai ser o campeão da copa do mundo \n";
	
	//else if = senao
	}else if (pais == "BRASIL"){
		
		cout << "Muto bem! O Brasil vai ser o campeão da copa do mundo \n";
	
	}else if (pais == "brasil"){
		
		cout << "Muto bem! O Brasil vai ser o campeão da copa do mundo \n";
	}else{
		cout << "\n";
		goto recomecar;
	}

	
	
	
	
	
	system("pause");
	return 0;
}
