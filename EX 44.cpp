#include <iostream>
using namespace std;

void crescente(float a, float b,float c){
    if (a <= b and a <= c) {
                if (b <= c)
                    cout << a << " " << b << " " << c;
                else
                    cout << a << " " << c << " " << b;
            } else if (b <= a and b <= c) {
                if (a <= c)
                    cout << b << " " << a << " " << c;
                else
                    cout << b << " " << c << " " << a;
            } else {
                if (a <= b)
                    cout << c << " " << a << " " << b;
                else
                    cout << c << " " << b << " " << a;
            }
}

void decrescente(float a, float b,float c){
cout << "Ordem decrescente: ";
    if (a >= b and a >= c) {
                if (b >= c)
                    cout << a << " " << b << " " << c;
                else
                    cout << a << " " << c << " " << b;
            } else if (b >= a and b >= c) {
                if (a >= c)
                    cout << b << " " << a << " " << c;
                else
                    cout << b << " " << c << " " << a;
            } else {
                if (a >= b)
                    cout << c << " " << a << " " << b;
                else
                    cout << c << " " << b << " " << a;
            }
}        

void valorentre(float a, float b,float c){
    if (a >= b and a >= c) {
                cout << b << " " << a << " " << c;
            } else if (b >= a and b >= c) {
                cout << a << " " << b << " " << c;
            } else {
                cout << a << " " << c << " " << b;
            }
    
}

int main(){
    int i;
    float a, b, c;

    cout << "Digite o valor de i (inteiro e positivo): ";
    cin >> i;
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    cout << "Digite o valor de c: ";
    cin >> c;

    // OPCIONAL cout << "Valores lidos: a = " << a << ", b = " << b << ", c = " << c << endl;
 
    switch (i) {
        case 1: // Ordem crescente
            cout << "Ordem crescente: ";
            crescente(a,b,c);
            break;
            
        case 2: // Ordem decrescente
            cout << "Ordem decrescente: ";
            decrescente(a,b,c);
            break;
            
        case 3: // Maior valor no meio
            cout << "Maior valor no meio: ";
            valorentre(a,b,c);
            break;
            
        default:
            cout << "Valor de i inválido. Use 1, 2 ou 3.";
    return 0;
    }
}