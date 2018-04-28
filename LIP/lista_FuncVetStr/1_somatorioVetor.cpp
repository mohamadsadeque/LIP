#include <iostream>
#define TAM 5
using namespace std;
int A[TAM];

int somatorio(int v[], int tam){
    int soma = 0;
    for(int i = 0; i < tam; i++)
        soma += v[i];
    return soma;
}
int main()
{
    for(int i = 0; i < TAM; i++){
        cin >> A[i];
    }
    cout << somatorio(A, TAM) << endl;
    return 0;
}
