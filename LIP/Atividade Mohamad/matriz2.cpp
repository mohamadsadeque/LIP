#include <iostream>
#include<cmath>
#include<cstring>
#include <cstdlib>
#include <ctime>
#define TAM 50
#include <climits>
using namespace std;
int id_soma,id_produto;
int soma = 0;
int produto = 1;
long int maiorSoma = LONG_MIN;
long int menorProduto = LONG_MAX;




int main (void){
 int n,A[TAM][TAM];

    srand(time(NULL));
    do
    {
        cout << "N:" << endl;
        cin >> n;
    }
    while(n < 3 || n > 50);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            A[i][j] = 1 + rand()%5;
        }
    }

    for(int j = 0; j < n; j++)
    {
        soma += A[0][j];
    }
    cout<< "Soma da primeira linha : " << soma << endl;
    soma = 0;

    for(int j = 0; j < n; j++)
    {
        soma += A[j][2];
    }
    cout<< "Soma da terceira coluna : " << soma << endl;
    soma = 0;

    for(int i = 0; i <n; i++)
    {
        produto *= A[i][i];

    }
    cout<< "produto da diagonal principal : " << produto << endl;
    produto = 1;
    for(int i = 0; i < n; i++)
    {
        produto *= A[i][n-i-1];

    }
    cout<< "produto da diagonal secundaria : " << produto << endl;
    produto = 1;

     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            soma += A[i][j];
        }
    }
    cout<< "Soma da matriz : " << soma << endl;
    soma = 0;

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cout << A[i][j] << " " ;
    }
cout << endl;
}




    return 0;
}
