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
int numero;
int total = 0;
int main()
{
    cin >> numero;
    for(int i =  digitos(numero); i >= 1; i-- ){
       cout<< numero%10;
       numero = numero/10;

    }

    return 0;
}
