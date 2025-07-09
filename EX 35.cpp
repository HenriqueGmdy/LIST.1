#include <iostream>
using namespace std;

// Função para calcular a média aritmética
float mediaAritmetica(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3.0;
}

// Função para calcular a média ponderada com pesos 3, 3, 4
float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 3 + n2 * 3 + n3 * 4) / 10.0;
}

// Função para calcular a média harmônica
float mediaHarmonica(float n1, float n2, float n3) {
    if (n1 == 0 || n2 == 0 || n3 == 0) {
        cout << "Erro: notas iguais a zero não são permitidas na média harmônica." << endl;
        return 0;
    }
    return 3.0 / (1.0 / n1 + 1.0 / n2 + 1.0 / n3);
}

int main() {
    float nota1, nota2, nota3;
    int escolha;

    cout << "Digite as três notas: ";
    cin >> nota1 >> nota2 >> nota3;

    cout << "\nEscolha o tipo de média a ser calculada:\n";
    cout << "1 - Média Aritmética\n";
    cout << "2 - Média Ponderada (3,3,4)\n";
    cout << "3 - Média Harmônica\n";
    cout << "Opção: ";
    cin >> escolha;

    float resultado;

    switch (escolha) {
        case 1:
            resultado = mediaAritmetica(nota1, nota2, nota3);
            cout << "Média Aritmética: " << resultado << endl;
            break;
        case 2:
            resultado = mediaPonderada(nota1, nota2, nota3);
            cout << "Média Ponderada: " << resultado << endl;
            break;
        case 3:
            resultado = mediaHarmonica(nota1, nota2, nota3);
            if (resultado != 0)
                cout << "Média Harmônica: " << resultado << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
    }

    return 0;
}
