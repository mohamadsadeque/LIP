#include <iostream>
#include <cmath>
using namespace std;

int digitos(int n){
    int cont = 0;
    while(n > 0){
        if(n%10 >= 0){
            cont++;
        }
        n = n/10;
    }
    return cont;
}


int main()
{
    int n1,n2,contador = 0;
    cin >> n1;
    cin >> n2;
    contador = digitos(n2);
    while (n2%10 == n1%10){
        contador--;
        n1 = n1/10;
        n2 = n2/10;
    }
    if(contador == 0 )
    cout << "n2 representa os ultimos digitos de n1" << endl;
    else
    cout << "n2 nao representa os ultimos digitos de n1" << endl;

    return 0;
}
