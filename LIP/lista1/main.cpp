#include <iostream>
#include <cmath>
using namespace std;

int n1,n2;

int fat(int n){
if(n == 0)
    return 1;
else
    return n*fat(n-1);

}

int main()
{
    cin >> n1;
    cin >> n2;

    for(int i = (n1+1); i < n2; i++ ){
        if(i%2)
        cout << i << " " <<fat(i) << endl;
    }

    return 0;
}
