
#include <iostream>
#include <math.h>
using namespace std;

float ex7 (float a, float b, float c){
    float mediados3 = (a+b+c)/3;
    return mediados3;
}

float ex8 (float d, float e, float f){
    float multi3 = d*e*f;
    return multi3;
}

int main()
{
    //VARIÁVEIS
   float a = 0;
   float b = 0;
   float c = 0;
   float d = 0;
   float e = 0;
   float f = 0;
   
   //EXERCÍCIO 7
   cout << "Informe a:";
	cin >> a;
	cout << "Informe b:";
	cin >> b;
	cout << "Informe c:";
	cin >> c;
	
	float mediados3 = ex7 (a,b,c);
	float result7 = mediados3;
	cout << "A media dos valores e: " << result7 <<endl;
	
	//EXERCÍCIO 8
	cout << "Informe d:";
	cin >> d;
	cout << "Informe e:";
	cin >> e;
	cout << "Informe f:";
	cin >> f;
	
	float multi3 = ex8 (d,e,f);
	float result8 = multi3;
	cout << "A multiplicacao dos 3 resulta em: " << result8 <<endl;
	
    return 0;
}