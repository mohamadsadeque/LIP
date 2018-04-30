#include <iostream>


using namespace std;

bool bissexto(int n){
    if(((n%4 == 0)&&(n%100 != 0)) || (n%400 == 0) )
        return true;
    else
        return false;
}

void diaSeguinte(int &d, int &m, int &a){
    if(d == 31 && (m != 2 || m != 4 ||m != 9 ||m != 11)){
        if(m == 12){
            d = 1;
            m = 1;
            a++;
        }
        else{
            d= 1;
            m++;
        }
    }
    else if( d == 30 && (m== 4 || m == 9 || m == 11)){
        d  = 1;
        m++;
    }
    else if(d == 28 && m == 2 && !bissexto(a) ){
        d = 1;
        m++;

    }
    else if(d == 29 && m == 2){
        d = 1;
        m++;
    }
    else{
        d++;
    }
}
int main()
{
    while(1){
    int d,m,a;
    cin >> d;
    cin >> m;
    cin >> a;
    diaSeguinte(d,m,a);
    cout << d << " " << m << " " << a << endl;
    }
    return 0;
}
