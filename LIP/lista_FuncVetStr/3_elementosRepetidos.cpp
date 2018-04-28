#include <iostream>
#define TAM 500
using namespace std;
int a[TAM];
int b[10] = {};
int n;

void digitos(int a[],int n, int b[]){
    int j;
    for(int i = 0; i < n; i++){
    while(a[i]/10 > 0){
        j = a[i]%10;
        b[j] += 1;
        a[i] = a[i]/10;
    }
    j = a[i];
    b[j] += 1;
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    digitos(a,n,b);
    for(int i = 0; i < 10; i++)
        cout << i << ": " << b[i] <<endl;
    return 0;
}
