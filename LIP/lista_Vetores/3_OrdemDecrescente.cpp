#include <iostream>
#define TAM 10

using namespace std;
int n;
int A[TAM];
int aux;
int main()
{
    cout << "ENTRE COM NUMERO MENOR OU IGUAL A" << TAM << endl;
    cin >> n;
    while ( n > 10 || n < 1){
        cout << "ENTRE COM NUMERO MENOR OU IGUAL A" << TAM << endl;
        cin >> n;
    }
    for(int i = 0; i < n ; i++){
        cin >> A[i];
    }
    for(int j = 1; j < n; j++ ){
        aux = A[j];
       int i = j - 1;
            while((i >= 0) && (aux > A[i]) ){
                A[i+1] = A[i] ;
                i--;
            }
            A[i+1] = aux;
    }
    for(int i = 0 ; i < n ; i++)
        cout << A[i] << " ";
    return 0;
}
