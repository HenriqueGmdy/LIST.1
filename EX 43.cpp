#include <iostream>
using namespace std;


int main() {
    int cod;
    float salario;
    
    cout << "INSIRA SEU CÓDIGO DE CARGO:" <<endl;
    cout << "101 - GERENTE" <<endl;
    cout << "102 - ENGENHEIRO" <<endl;
    cout << "103 - TÉCNICO" <<endl;
    cin >> cod;
    
    cout << "INSIRA SEU SALÁRIO:" <<endl;
    cin >> salario;
    
    if (cod == 101){
        salario = salario*1.1;
        cout << "AUMENTO DE 10% PARA GERENTE;" <<endl;
        cout << "Seu salário agora é " << salario << "." <<endl;
    }else if (cod == 102){
        salario = salario*1.2;
        cout << "AUMENTO DE 20% PARA ENGENHEIRO;" <<endl;
        cout << "Seu salário agora é " << salario << "." <<endl;
    }else if (cod == 103){
        salario = salario*1.3;
        cout << "AUMENTO DE 30% PARA GERENTE;" <<endl;
        cout << "Seu salário agora é " << salario << "." <<endl;
    }else{
        cout << "CÓDIGO INVÁLIDO!" <<endl;
    }
    return 0;
}