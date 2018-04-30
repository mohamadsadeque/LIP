#include <iostream>

using namespace std;

float menorNota(float n1,float n2,float n3){
    if(n1 < n2 && n1 < n3)
        return n1;
    if(n2 < n1 && n2 < n3)
        return n2;
    if(n3 < n1 && n3 < n2)
        return n3;
}

float calcNota(float n1,float n2,float n3){
    float nota = 15 - (n1+n2+n3 - menorNota(n1,n2,n3));
    return nota;

}
int main()
{
    float n1,n2,n3;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    cout << calcNota(n1,n2,n3) << endl;
    return 0;
}
