#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    int num1, num2, cont;

    cout << "Digite o primeiro numero: \n";
    cin >> num1;
    cout << "Digite o segundo numero: \n";
    cin >> num2;

    for(cont = num1;cont < num2;cont++){
        cout << cont << endl;
    }






    system("pause");
    return 0;
}