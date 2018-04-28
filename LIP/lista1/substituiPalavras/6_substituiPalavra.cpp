#include <iostream>
#include <ctype.h>
#include <cstring >
#include <cmath>
#define TAM 50
using namespace std;
char palavra1[TAM], palavra2[TAM], texto[100];
int dif,tam1,tam2;
void repete(char text[], char word1[], char word2[]){
    int b = 1;
    for(int i = 0; i < strlen(text); i++)
    {
        for(int j = 0; j < strlen(word1); j++)
        {
            if(text[i+j] != word1[j])
            {
                b = 0;
                break;
            }
            b = 1;
        }
        if(b == 1)
        {
            tam1 = strlen(palavra1);
            tam2 = strlen(palavra2);
            dif = tam1 - tam2;
            if(dif < 0)
            {
                for(int n=0; n < abs(dif); n++)
                {
                    for(int m = strlen(text); m > (i+tam1+n)-1; m--)
                    {
                        text[m+1]  = text[m];
                    }
                }
            }
            else if(dif > 0){
                for(int n=0; n < abs(dif); n++)
                {
                    for(int m = (i+tam1-n-1); m < strlen(text); m++)
                    {
                        text[m-1]  = text[m];
                    }
                }
                text[strlen(text)- dif] = 0;

            }
            for(int k = 0 ; k < strlen(word2); k++)
            {
                text[i+k] = word2[k];
            }
        }
    }
}

int main()
{
    int a,b;
    cin.getline(palavra1 , TAM);
    cin.getline(palavra2 , TAM);
    cin.getline(texto , TAM);
    repete(texto, palavra1, palavra2);

cout << texto << endl;


    return 0;
}

