#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int cont, eleitores, voto;
	int candidato1 = 0;
	int candidato2 = 0;
	int candidato3 = 0;
	int nulo = 0;
	string eleito;
	
	cout << "Digite a quantidade de eleitores:\n";
	cin >> eleitores;
	
	for (cont = 1;cont <= eleitores;cont++){
		cout << "------------------------------------------------------\n";
		cout << "1 = candidato1\n2 = candidato2\n3 = candidato3\n4 = Nulo\n";
		cout << "Eleitor " << cont << " deseja votar em quem?\n";
		cin >> voto;
		
		switch(voto){
			case 1:
				candidato1++;
				break;
			case 2:
				candidato2++;
				break;
			case 3:
				candidato3++;
				break;
			case 4:
				nulo++;
				break;
		}
				
	}
	
	cout << "\n--------------------------------------------------\n";
	cout << "Candidato1 = " << candidato1 << " votos\n";
	cout << "Candidato2 = " << candidato2 << " votos\n";
	cout << "Candidato3 = " << candidato3 << " votos\n";
	cout << "Nulo = " << nulo << " votos\n";
	
	if( candidato1 > candidato2 && candidato1 > candidato3 && candidato1 > nulo){
		
		eleito = "\n O vencedor foi Candidato1";
		
	}else if (candidato2 > candidato1 && candidato2 > candidato3 && candidato2 > nulo){
		
		eleito = "\n O vencedor foi Candidato2";
		
	}else if (candidato3 > candidato1 && candidato3 > candidato2 && candidato3 > nulo){
		
		eleito = "\n O vencedor foi Candidato3";
		
	}else if ( nulo > candidato1 && nulo > candidato2 && nulo > candidato3){
		
		eleito = "\n O vencedor foi Nulo";
		
	}else{
		eleito = "\n Houve um empate";
	}
	
	cout << eleito << endl;
	
	system("pause");
	return 0;
}
