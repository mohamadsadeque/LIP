#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int cont = 0;
int aux = 0;
int aux2 = 0;
int retorno;
int flag = 0;
int repete(char frase[40], char palavra[40]){
    if( aux <= strlen(frase) ){
        if(aux2 < strlen(palavra)){
        if(palavra[aux2] == frase[aux]){
            flag = 1;
            aux++;
            aux2++;
            repete(frase,palavra);

        }
        else{
            flag = 0;
            aux2 = 0;
            aux++;
            repete(frase,palavra);
        }

        }
        else{
            if(flag == 1){
                cont++;
            }
            aux2 = 0;
            aux++;
            repete(frase,palavra);

        }
    }
    else{
        retorno = cont;
        cont = 0;
        aux = 0;
        aux2 = 0;
        return retorno;
    }
}

int main()
{
    cout << repete("cgato gato gatogat oc gato", "gato")<< endl;
    return 0;
}
