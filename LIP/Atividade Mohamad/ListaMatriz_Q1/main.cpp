#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <climits>
using namespace std;
int n,m,id_N,id_M;
int somaLinha = 0;
int produtoColuna = 1;
int maiorSomaLinha = -1;
int menorProdutoColuna = INT_MAX;
int main()
{
    srand(time(NULL));
    cout << "Digite n e m: " << endl;
    cin >> n >> m;
    while(n <=0 || m <= 0){
        cout << "n e m invalidos, digite novamente:" << endl;
        cin >> n >> m;
    }
    int v[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j< m; j++){
            v[i][j] = 1 + rand()%10;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            somaLinha += v[i][j];
        }
        if(somaLinha > maiorSomaLinha){
            id_N = i;
            maiorSomaLinha = somaLinha;
        }
        somaLinha = 0 ;
    }
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            produtoColuna *= v[i][j];
        }
        if(produtoColuna < menorProdutoColuna){
            id_M = j;
            menorProdutoColuna = produtoColuna;
        }
        produtoColuna = 1 ;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j< m; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Maior soma em uma linha ocorre na linha " << (id_N + 1) <<" sendo igual a: " << maiorSomaLinha << endl;
    cout << "Menor produto em uma coluna ocorre na coluna " << (id_M + 1) <<" sendo igual a: " << menorProdutoColuna << endl;

    return 0;
}
