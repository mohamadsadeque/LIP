#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#define TAM 50
using namespace std;

int main()
{
    int flag = 1;
   srand(time(NULL));
  int n,m,o,p, A[TAM][TAM], B[TAM][TAM];
    cin >> n;
    cout << " MATRIZ A: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }


for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(A[i][j] != A[j][i] ){
                flag = 0;
                break;
            }
        }
}
if(flag == 1)
    cout << "É simetrica" << endl;
else
    cout<< "Nao é simetrica" << endl;






    return 0;
}
