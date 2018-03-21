#include <iostream>
#include <cmath>
using namespace std;
int pot(int b, int e){
    int produto = b;
    for(int i  = 1; i < e; i++ ){
        produto *= b;
    }
    return produto;
}
int main()
{
    int bi, bf, ei, ef;
    cin >> bi;
    cin >> bf;
    cin >> ei;
    cin >> ef;
    for(int i = bi; i <= bf; i++){
            cout << " " << endl;
        for(int j = ei; j <= ef; j++){
            if(j == 0){
                cout << 1 << " ";
            }
            else if(j == 1)
                cout << i << " ";
            else
                cout << pot(i, j) << " ";
        }
    }
    return 0;
}
