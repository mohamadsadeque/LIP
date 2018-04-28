#include <iostream>
#define TAM 50
using namespace std;
int n;
int v[TAM];
int main()
{
    cout << "ENTRE COM NUMERO MENOR OU IGUAL A" << TAM << endl;
    cin >> n;
    while ( n > TAM || n < 1){
        cout << "ENTRE COM NUMERO MENOR OU IGUAL A" << TAM << endl;
        cin >> n;
    }
    for(int i = 0; i< n ; i++)
        cin >> v[i];
    for(int i = n-1; i >= 0; i--){
        cout << v[i] << " " ;
    }
    return 0;
}
