#include <iostream>
int soma = 0;
using namespace std;

int v[10] = {1,1,3,2,1,0,6,0,8,9};
bool primo(int n){
    int cont = 1;
    for(int i = 2; i <=n; i++){
        if(n%i == 0)
            cont++;
        if(cont > 2)
            break;
    }
    if(cont == 2){
        return true;
    }
    else{
        return false;
    }
}

int somaPrimos(int v[], int n, int cont, int &soma){
    if( cont < n){
        if(primo(v[cont])){
            soma += v[cont];
            return somaPrimos(v,n, cont+1, soma);
        }
        else
            return somaPrimos(v,n, cont+1, soma);
    }
    else
        return soma;
}
int main()
{
   cout << somaPrimos(v,10,0,soma)<< endl;

    return 0;
}
