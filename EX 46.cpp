#include <iostream>
using namespace std;


int main(){
    
    float contaluz = 0;
    float result = 0;
    
    cout << "Insira a quantidade de KW gasta: " << endl;
    cin >> contaluz;
    
    if (contaluz>=250){
        cout << "Custo: 1.50 por KW." << endl;
        result = (contaluz*1.5)*1.2;
        cout << "Você deve pagar " << result << " reais." <<endl;
    }else if (contaluz>=200){
        cout << "Custo: 1.20 por KW."<< endl;
        result = (contaluz*1.2)*1.2;
        cout << "Você deve pagar " << result << " reais." <<endl;
    }else if (contaluz>=100){
         cout << "Custo: 0.75 por KW."<< endl;
         result = (contaluz*0.75)*1.2;
        cout << "Você deve pagar " << result << " reais." <<endl;
    }else if (contaluz<100){
         cout << "Custo: 0.50 por KW."<< endl;
         result = (contaluz*0.5)*1.2;
        cout << "Você deve pagar " << result << " reais." <<endl;
    }else{
        cout << "Valor não reconhecido."<< endl;
    }
    
    return 0;
}