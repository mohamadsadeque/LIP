#include <iostream>

using namespace std;
int primo(int n){
    int cont = 1;
    for(int i = 2; i <=n; i++){
        if(n%i == 0)
            cont++;
        if(cont > 2)
            break;
    }
    if(cont == 2){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << primo(n) << endl;
    return 0;
}
