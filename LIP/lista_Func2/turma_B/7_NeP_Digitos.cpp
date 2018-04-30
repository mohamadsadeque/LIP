#include <iostream>

using namespace std;

void nep_digitos(){
    int n, p;
    cin >> n;
    int cont = 0;
    while(n > 0){
        cont++;
        p = n;
        n/=10;
    }
    cout<< "numero de digitos: " << cont << " Primeiro digito: " << p<< endl;

}
int main()
{
    int m;
    cin >> m;
    while(m>0){
        nep_digitos();
        m--;
    }
    return 0;
}
