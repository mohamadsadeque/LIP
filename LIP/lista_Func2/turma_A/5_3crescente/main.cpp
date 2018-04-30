#include <iostream>

using namespace std;
void crescente(int n1, int n2, int n3)
{
    if(n1 < n2 && n1 < n3)
    {
        if(n2 < n3)
            cout << n1 << " " << n2 <<" " << n3;
        else
            cout << n1 << " " << n3 <<" " << n2;
    }
    if(n2 < n1 && n2 < n3)
    {
        if(n1 < n3)
            cout << n2 << " " << n1 <<" " << n3;
        else
            cout << n2 << " " << n3 <<" " << n1;
    }
    if(n3 < n1 && n3 < n2)
    {
        if(n1 < n2)
            cout << n3 << " " << n1 <<" " << n2;
        else
            cout << n3 << " " << n2 <<" " << n1;
    }
}
int main()
{
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    crescente(n1,n2,n3);
    return 0;
}
