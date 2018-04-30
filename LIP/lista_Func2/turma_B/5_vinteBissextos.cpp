#include <iostream>

using namespace std;

bool bissexto(int n){
    if(((n%4 == 0)&&(n%100 != 0)) || (n%400 == 0) )
        return true;
    else
        return false;
}

void vinteBissextos(int n){
    int cont = 0;
    while(cont < 20){
        if(bissexto(n)){
            cout << n << endl;
            cont++;
            }
    n++;
    }
}

int main()
{
    int n1;
    cin >> n1;
    vinteBissextos(n1);

    return 0;
}

