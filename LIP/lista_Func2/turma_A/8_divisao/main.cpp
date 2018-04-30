#include <iostream>

using namespace std;

void divisao(int x, int y, int &r, int &q)
{
    r = x%y;
    q = x/y;
}

int main()
{
    int x,y,q,r;
    cin >> x >> y;
    divisao(x,y,r,q);
    cout << "r " << r << " q " << q << endl;
    return 0;
}
