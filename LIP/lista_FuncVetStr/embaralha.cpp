#include <iostream>
#include <cstring>
#define tam 1000

using namespace std;

char b[tam] = "natal";
char a[tam] = "documento";
char c[tam];

int main()
{
    int contA = 0, contB=0, TAM;
    TAM = (strlen(a)+strlen(b) );
    for(int i = 0; i < TAM; i++ ){
        if( (i%2 == 0 && (contA < strlen(a)) ) || contA  >= strlen(b)){
            c[i] = a[contA];
            contA++;
        }
        if( (i%2 != 0 && contB < strlen(b)) || contB  >= strlen(a) ){
            c[i] = b[contB];
            contB++;
        }

    }

    cout<< c <<endl;

    return 0;
}
