#include <iostream>
#include <math.h>
using namespace std;

int verificaPar(int a){
    if(a % 2==0){
        cout << "O numero é par" << endl;
    }else{          
        cout << "O numero é impar" << endl;      
    }
    if(a<=0){
        cout << "O numero é negativo" << endl;
    }else{          
        cout << "O numero é positivo" << endl;      
    }
}


int main(){
    int a;
    cout << "Informe um numero: ";
    cin >> a;
    verificaPar(a);
    return 0;
}