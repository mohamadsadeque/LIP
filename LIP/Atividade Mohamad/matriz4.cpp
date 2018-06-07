#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#define TAM 50
using namespace std;

int main()
{

   srand(time(NULL));
  int n,m,o,p, A[TAM][TAM], B[TAM][TAM];
 int  C[TAM][TAM]= {};
    int soma = 0;
    cin >> n >> m >> p>>o;
    if(m != p){
        cout << "Nao é possivel" <<endl;
    }
    else{
            cout << "MATRIZ A: " << endl;
        for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            A[i][j] = 1 + rand()%5;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
     cout << "MATRIZ B: " << endl;
        for(int i = 0; i < p; i++)
    {
        for(int j = 0; j < o; j++)
        {
            B[i][j] = 1 + rand()%5;
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    cout << "PRODUTO : " <<endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < o; j++){
            for(int k = 0; k < p ;k++){
                     soma += (A[i][k] * B[k][j]);
            }
        C[i][j] = soma;
        soma = 0;
        cout << C[i][j] << " ";
        }
        cout << endl;

    }





    }

    return 0;
}
