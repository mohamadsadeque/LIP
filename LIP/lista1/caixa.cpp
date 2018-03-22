#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int quantia,c100,c50,c20,c10,c5,c2,c1,m50,m25,m10,m5,m1 ;

   cout << " Digite a quantia"<< endl;
   cin >> quantia;
   c100 = quantia/100;
   quantia = quantia%100;
   c50 = (int)quantia/50;
   quantia = quantia%50;
   c20 = (int)quantia/20;
   quantia = quantia%20;
   c10 = (int)quantia/10;
   quantia = quantia%10;
   c5 = (int)quantia/5;
    quantia = quantia%5;
    c2 =  (int)quantia/2;
    quantia = quantia%2;
    c1 = (int)quantia;
    quantia = quantia%1;


   cout << c100 << " "<< c50 << " " << c20 << " " << c10 << " " << c5 << " " << c2 << " " << c1 ;


    return 0;
}
