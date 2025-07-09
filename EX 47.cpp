#include <iostream>
using namespace std;

int main(){
    
    float ida = 0;
    
    cout << "CENTRO DE CONTROLE; OPERAÇÕES:" << endl;
    cout << "Grupo 1: OK" << endl;
    cout << "Grupo 2: OK" << endl;
    cout << "Grupo 3: OK" << endl;
    cout << "Insira o índice de poluição atual: " << endl;
    cin >> ida;
    
    if (ida>=0.5){
        cout << "ALERTA 3 - Parar operações!" << endl;
    }else if (ida>=0.4){
        cout << "ALERTA 2 - Grupo 1 e 2 devem parar suas operações!"<< endl;
    }else if (ida>=0.3){
         cout << "ALERTA 1 - Grupo 1 deve parar suas operações!"<< endl;
    }else{
        cout << "Os índices estão aceitáveis."<< endl;
    }
    
    return 0;
}