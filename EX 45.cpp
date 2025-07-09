#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float valor;
    int c100, c50, c10, c5, c1;
    
    cout << "Insira o Valor de cédulas: " <<endl;
    cin >> valor;
    
    c100 = valor/100;
    valor = valor - (100*c100);
    c50 = valor/50;
    valor = valor - (50*c50);
    c10 = valor/10;
    valor = valor - (10*c10);
    c5 = valor/5;
    valor = valor - (5*c5);
    c1 = valor;
    
    cout << "O valor de cédulas de 100 é: " << c100 <<"."<<endl;
    cout << "O valor de cédulas de 50 é: " << c50 <<"."<<endl;
    cout << "O valor de cédulas de 10 é: " << c10 <<"."<<endl;
    cout << "O valor de cédulas de 5 é: " << c5 <<"."<<endl;
    cout << "O valor de cédulas de 1 é: " << c1 <<"."<<endl;

    return 0;
}