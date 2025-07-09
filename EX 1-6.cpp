#include <iostream>
#include <math.h>
using namespace std;

//EXERCÍCIO 1
void ex1 (){
     cout << "Hello World" << endl;
     cout << "Idade: 18, peso: 50, Altura: 1.78cm," << endl;
     cout << "Motor: 1.8, eixos: 1.58, Peso: 1540kg" << endl;
}

//EXERCÍCIO 2
void ex2 (){
     cout << "*" << endl<< "**" << endl<< "***" << endl<< "****" << endl;
     cout << "****" << endl<< "***" << endl<< "**" << endl<< "*" << endl;
     cout << "  *" << endl<< " ***" << endl<< "*****" << endl;
}

//EXERCÍCIO 3
float ex3 (float a, float b){
    float x = a+b;
    return x;
}

//EXERCÍCIO 6
float ex6 (float c, float d, float e){
    float resultado6 = c+d+e;
    return resultado6;
}

int main (){
    //VARIÁVEIS EX3
    float a = 0;
    float b = 0;
    float x = 0;
    //VARIÁVEIS EX5
    int z = 10;
    int y = 20;
    //VARIÁVEIS EX6
    int c = 0;
    int d = 0;
    int e = 0;
    int resultado6 = 0;
    //COMANDOS EX 1 e 2
    ex1 ();
    ex2 ();
    
    cout << "Insira um valor" << endl;
    cin >> a;
    cout << "Insira outro valor" << endl;
    cin >> b;
    x = ex3 (a,b);
    cout << "O resultado é:"<< x <<endl;
    
    //EXERCÍCIO 5
    int aux = 0;
	aux = z;
	z = y;
	y = aux;
	cout << "z: "<< z << ", y:" << y << endl;
	
	//COMANDOS EX6
	cout << "Insira o valor para soma tripla: " << endl;
    cin >> c;
    cout << "Insira outro valor para soma tripla: " << endl;
    cin >> d;
    cout << "Insira um ultimo valor para soma tripla: " << endl;
    cin >> e;
    resultado6 = ex6 (c,d,e);
    cout << "A soma tripla resulta em: "<< resultado6<<endl;
    
	return 0;
}
   