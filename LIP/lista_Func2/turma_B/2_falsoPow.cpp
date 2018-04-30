#include <iostream>

using namespace std;

float falsoPow(int b,int e)
{
    float resultado = 1;
    if(e > 0)
    {
        for(int i = e; i > 0; i--)
        {
            resultado *= b;
        }
    }
    else if(e < 0){
        e*= -1;
        for(int i = e; i > 0; i--)
        {
            resultado *= b;
        }
        resultado = 1/resultado;
    }


    return resultado;
}

int main()
{
    int base, expo;
    cin >> base;
    cin >> expo;
    cout << falsoPow(base,expo) << endl;


    return 0;
}
