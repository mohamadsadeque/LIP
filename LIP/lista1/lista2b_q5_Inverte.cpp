
#include <iostream>
#include <cmath>
using namespace std;

int digitos(int num){
    int c = 1;
    while(num/10 > 0){
        c++;
        num = num/10;
    }
    return c;
}
double potencia;
int numero;
int total = 0;
int main()
{
    cin >> numero;
    for(int i =  digitos(numero); i > 0; i-- ){
        potencia = (pow(10, i-1));
       total += (int)(numero%10) * potencia;
       numero = (int)numero/10;

    }
cout << total;
    return 0;
}
