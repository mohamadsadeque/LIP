#include <iostream>

using namespace std;

void collatz(int x){
    while(x != 1){
        cout << x << " ";
        if(x%2 == 0){
            x = x/2;
        }
        else{
            x = 3*x + 1;
        }
    }
    cout << x;
}

int main()
{
    int n;
    cin >> n;
    collatz(n);
    return 0;
}
