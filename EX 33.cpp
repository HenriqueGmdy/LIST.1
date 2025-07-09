#include <iostream>
using namespace std;



int main(){
    
    float altura = 0;
    float calc = 0;
    char genero = '\0';

    cout <<" INFORME SUA ALTURA: "<<endl;
    cin >> altura;
    cout <<"**DIGA SEU GÊNERO**"<<endl;
    cout <<"M para Masculino e F para Feminino"<<endl;
    cin >> genero;
    
    if (genero == 'M' or genero == 'm'){
        calc = (72.7 * altura)- 58;
        cout << "Seu peso ideal é de "<<calc<< "quilos."<<endl;
    }else if (genero == 'F' or genero == 'f'){
    calc = (62.1 * altura)- 44.7;
        cout << "Seu peso ideal é de "<<calc<< "quilos."<<endl;
    }else{
        cout << "Esse caractere não pode ser reconhecido."<<endl;
        cout << "       Tente com M e F apenas."<<endl;
    }
    
    
    return 0;
}