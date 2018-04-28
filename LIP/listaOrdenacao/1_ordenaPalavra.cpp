/*
1. Crie uma função ordenaPalavra que recebe um cadeia de caracteres s,
formada apenas por letras minúsculas, e ordena os caracteres de s de
acordo com o seguinte critério:
(a) As consoantes devem aparecer antes das vogais.
(b) Após aplicar o primeiro critério, as vogais e as consoantes devem
ser ordenadas em ordem inversa a alfabética.
Escreva as funções auxiliares que achar necessário. A entrada e saída
de dados deve ser realizada na função principal.
- Entrada: ”bola”
- Saída: ”lboa”
- Entrada: ”tomate”
- Saída: ”ttmoea”
*/

#include <iostream>
#include <ctype.h>
#include <cstring >
#include <cmath>
#define TAM 50
using namespace std;
char text[TAM];

void ordenaString(char str[]){
    char aux;
    for(int j = 1; j < strlen(str); j++ ){
        aux = str[j];
       int i = j - 1;
            while((i >= 0) && (aux > str[i]) ){
                str[i+1] = str[i] ;
                i--;
            }
            str[i+1] = aux;
    }
}


void ordenaPalavra(char texto[]){
    char consoante[strlen(texto)] = {}, vogal[strlen(texto)]={};
    int cont1 = 0;
    int cont2 = 0;
    int cont3 = 0;
    for(int i = 0; i < strlen(texto); i++){
        if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ){
            vogal[cont1] = texto[i];
            cont1++;
        }
        else{
            consoante[cont2] = texto[i];
            cont2++;
        }
    }
    ordenaString(consoante);
    cout << consoante << endl;
    ordenaString(vogal);
    cout << vogal << endl;

    for(int i = 0; i < strlen(consoante); i++){
        texto[cont3] = consoante[i];
        cont3++;
    }
    for(int i = 0; i < strlen(vogal); i++){
        texto[cont3] = vogal[i];
        cont3++;
    }
}

int main()
{
    cin. getline (text , TAM );
    ordenaPalavra(text)
    ;
    cout << text;
    return 0;
}
