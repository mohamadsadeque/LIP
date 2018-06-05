#include <iostream>
#include <cmath>
using namespace std;

int i = 2;
int retorno;

bool ehPrimo(int x, int i){
    if( x == i){
        i = 2;
        return true;
    }
    else if(x%i == 0){
        i = 2;
        return false;
    }
    else
    return ehPrimo(x, i+1);

}

int main()
{
    float n;
    cout << ehPrimo(17,i) << endl;
    cout << ehPrimo(3,i) << endl;
    cout << ehPrimo(14,i) << endl;

    return 0;
}
