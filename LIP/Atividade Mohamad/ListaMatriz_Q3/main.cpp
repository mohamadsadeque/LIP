#include <iostream>
#define TAM 3
using namespace std;

int A[TAM][TAM]= {
    {1, 2,4},
    {3,4,6},
    {1,2,3}
};
int B[TAM][TAM];
void somaTransposta(int v[TAM][TAM],int soma[TAM][TAM]){
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j< TAM; j++){
            soma[i][j] = v[i][j] + v[j][i];
        }
    }
}

int main()
{
    somaTransposta(A,B);
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j <TAM ; j++){
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
