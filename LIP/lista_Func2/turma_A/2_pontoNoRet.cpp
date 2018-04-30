#include <iostream>

using namespace std;

void pontoNoRet(int x1,int y1, int h, int w, int x2, int y2){
    if( (x2 >= x1 && x2 <= (x1+w)) && (y2 >= y1 && y2 <= (y1+h)) )
        cout << "O ponto esta no retangulo";
    else
        cout << "O ponto nao esta no retangulo";

    }

int main()
{
    int x1,x2,y1,y2,h,w;
    cin >> x1 >>y1>>h>>w>>x2>>y2;
    pontoNoRet(x1,y1,h,w,x2,y2);
    return 0;
}
