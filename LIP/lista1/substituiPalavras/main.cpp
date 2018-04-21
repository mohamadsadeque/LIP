#include <iostream>
#include <ctype.h>
#include <cstring >
#define TAM 50
using namespace std;
char palavra1[TAM], palavra2[TAM], texto[100];

void repete(char text[], char word1[], char word2[]){
    int b = 1;
    for(int i = 0; i < strlen(text); i++){
        for(int j = 0; j < strlen(word1); j++){
            if(text[i+j] != word1[j]){
                b = 0;
                break;
            }
        b = 1;
        }
        if(b == 1){
            for(int k = 0 ; k < strlen(word2); k++){
                text[i+k] = word2[k];
            }
        }
    }
}

int main()
{
    cin.getline(palavra1 , TAM);
    cin.getline(palavra2 , TAM);
    cin.getline(texto , TAM);
    repete(texto, palavra1, palavra2);
cout << texto;

    return 0;
}
