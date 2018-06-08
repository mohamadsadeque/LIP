#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#define TAM 50
using namespace std;

int main()
{
    int cont = 0;
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
            if(A[i][j] != 0 && A[i][j] != 1  ){
                flag = 0;
                break;
            }
            if(A[i][j] == 1){
                for(int k = j-1; k > 0; k--){
                    if(A[i][k] == 1 )
                        flag = 0;
                }
                for(int k = j+1; k < n; k++){
                    if(A[i][k] == 1 )
                        flag = 0;
                }
                for(int k = i-1; k > 0; k--){
                    if(A[k][j] == 1 )
                        flag = 0;
                }
                for(int k = i+1; k < n; k++){
                    if(A[k][j] == 1 )
                        flag = 0;
                }
            }

        }
}

if(flag == 1)
    cout << "É de permutacao" << endl;
else
    cout<< "Nao é de permutacao" << endl;






    return 0;
}
