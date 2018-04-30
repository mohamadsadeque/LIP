#include <iostream>

using namespace std;
int divisores(int n){
    int cont = 1;
    for(int i = 2; i <= n; i++){
        if(n%i == 0)
            cont++;
    }
    return cont;
}
int main()
{
    int n;
    cin >> n;
    cout << "Qnt de divisores: " << divisores(n)<< endl;
    return 0;
}
