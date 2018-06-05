#include <iostream>
#include <cmath>
using namespace std;

int cont = 0;
int retorno;

int digitos(int num, int n){
    if( num > 0 ){
        if(num%10 == n){
            cont++;
        }
        return digitos(num/10, n);
    }
    else{
        retorno = cont;
        cont = 0;
        return retorno;
    }
}

int main()
{
    float n;

    cout << digitos(711277, 7) << endl;
    cout << digitos(121,1) << endl;
    return 0;
}
