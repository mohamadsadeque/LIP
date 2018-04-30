#include <iostream>

using namespace std;

int contaDigitos(int n, int d){
    int cont = 0;
    while(n >0){
        if(n%10 == d)
            cont++;
        n/=10;
    }
    return cont;
}

bool permuta(int n1, int n2){
    for(int i = 0; i < 9; i++){
        if(contaDigitos(n1,i) != contaDigitos(n2,i))
            return false;
    }
    return true;
}

int main()
{
    int n1,n2;
    cin >> n1;
    cin >> n2;
    if(permuta(n1,n2)){
        cout << "SIM" << endl;
    }
    else{
            cout << "NAO" << endl;

    }
    return 0;
}

