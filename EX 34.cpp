#include <iostream>
using namespace std;

float mediaPonderada(float nota1, float nota2, float nota3){
    int peso1 = 3, peso2 = 3, peso3 = 3;
    
    if (nota1>=nota2 and nota1>=nota3){
        peso1 = 4;
    }else if (nota2>=nota1 and nota2>=nota3){
        peso2 = 4;
    }else{
        peso3 = 4;
    }
    
    float somapesos = peso1 + peso2 + peso3;
    float media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / somapesos;

    return media;
}


int main(){
    int codigoAluno;
    float nota1 = 0, nota2 = 0, nota3 = 0;

    cout << "---------  Prezado aluno -------------" << endl;
    cout << "Informe seu codigo/matricula: ";
    cin >> codigoAluno;

    cout << "Informe a nota 1: ";
    cin >> nota1;
    cout << "Informe a nota 2: ";
    cin >> nota2;
    cout << "Informe a nota 3: ";
    cin >> nota3;
    cout << "---------------------------------------" << endl;

    float media = mediaPonderada(nota1, nota2, nota3);

    cout << "Codigo do aluno: " << codigoAluno << endl;
    cout << "Notas: " << nota1 << ", " << nota2 << ", " << nota3 << endl;
    cout << "Media ponderada: " << media << endl;

    if (media >= 50) {
        cout << "APROVADO!" << endl;
    } else {
        cout << "REPROVADO!" << endl;
    }

    return 0;
}