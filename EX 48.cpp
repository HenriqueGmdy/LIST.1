#include <iostream>
using namespace std;

// Função para o Produto 1
float Prod1(float& quantidade1) {
    float preco1 = 10.0;
    cout << "Produto 1 - Banana (R$ " << preco1 << " cada)" << endl;
    cout << "Informe a quantidade de bananas: ";
    cin >> quantidade1;
    return preco1 * quantidade1;
}

// Função para o Produto 2
float Prod2(float& quantidade2) {
    float preco2 = 20.0;
    cout << "Produto 2 - Maçã (R$ " << preco2 << " cada)" << endl;
    cout << "Informe a quantidade de maçãs: ";
    cin >> quantidade2;
    return preco2 * quantidade2;
}

int main() {
    float quantidade1 = 0, quantidade2 = 0;
    float subtotal1 = 0, subtotal2 = 0;
    float ipi = 0;

    cout << "Informe a porcentagem do IPI: ";
    cin >> ipi;
    subtotal1 = Prod1(quantidade1);
    subtotal2 = Prod2(quantidade2);

    float total = (subtotal1 + subtotal2) * (ipi / 100 + 1);
    cout << "Resumo da compra:" << endl;
    cout << "Subtotal Produto 1: R$ " << subtotal1 << endl;
    cout << "Subtotal Produto 2: R$ " << subtotal2 << endl;
    cout << "Total com IPI: R$ " << total << endl;

    return 0;
}
