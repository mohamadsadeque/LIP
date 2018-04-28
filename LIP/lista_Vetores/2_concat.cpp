#include <iostream>
#define M 5
#define N 5
#define O 5

using namespace std;
int A[M],B[N],C[O];

int main()
{
    int cont = 0;
    for(int i = 0; i < M ; i++)
        cin >> A[i];
    for(int i = 0; i < N ; i++)
        cin >> B[i];
    for(int i = 0; i < O ; i++)
        cin >> C[i];
    int P =  M + N + O;
    int D[P];
    for(int i = 0; i < M; i++){
        D[cont] = A[i];
        cont++;
    }
    for(int i = 0; i < N; i++){
        D[cont] = B[i];
        cont++;
    }
    for(int i = 0; i < O; i++){
        D[cont] = C[i];
        cont++;
    }
    for(int i = 0; i < P; i++){
    cout << D[i] << " ";
    }
    return 0;
}
