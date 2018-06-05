#include <iostream>
#include <cmath>
using namespace std;

float serie(float n){
    if(n == 1)
        return ((float)2/4);
    else
        return ((pow(n,2) + 1) / ( n + 3 )) + serie(n-1);
}
int main()
{
    float n;
    cin >> n;
    cout << serie(n) << endl;
    return 0;
}
