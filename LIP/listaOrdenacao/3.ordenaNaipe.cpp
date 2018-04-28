/*
3. Um jogador de baralho possui um conjunto de n na mão e deseja ordená-
las com relação ao naipe de forma que sigam a seguinte ordem: copas,
espadas, ouros e paus. Além disso, em cada naipe, as cartas devem
estar em ordem (A < 2 < · · · < 10 < J < Q < K). Escreva um procedimento
que recebe um vetor de caracteres naipes e um vetor de inteiros
representando numeros, respectivamente, os naipes e a numeração das
n cartas. Esse procedimento deve ordenar as cartas conforme desejado.
A entrada e saída de dados deve ser realizada na função principal.

• Entrada: N=8
naipes={c e p o c p e o}
numeros={5 3 4 8 2 9 13 1}
• Saída: naipes={c c e e o o p p} e numeros={2 5 3 13 1 8 4 9}
*/


#include <iostream>
#include <ctype.h>
#include <cstring >
#include <cmath>
#define TAM 60
using namespace std;

char naipe[TAM] = {};
int numero[TAM];
int n;

void ordena(int str[], int tam){
    int aux;
    for(int j = 1; j < tam; j++ ){
        aux = str[j];
       int i = j - 1;
            while((i >= 0) && (aux < str[i]) ){
                str[i+1] = str[i] ;
                i--;
            }
            str[i+1] = aux;
    }
}
void ordenaCartas(){
    int contC = 0, contE = 0, contO = 0, contP = 0, contTAM = 0;
    int copas[TAM], espadas[TAM], ouros[TAM], paus[TAM];
    cout << "numero de cartas" << endl;
    cin >> n;
    cout << "naipe e numero:" << endl;
    for(int i = 0; i < n; i++ ){
        cin >> naipe[i];
        if(naipe[i] == 'c'){
        cin >> copas[contC];
        contC++;
        }
        if(naipe[i] == 'e'){
        cin >> espadas[contE];
        contE++;
        }
        if(naipe[i] == 'o'){
        cin >> ouros[contO];
        contO++;
        }
        if(naipe[i] == 'p'){
        cin >> paus[contP];
        contP++;
        }
    }

    ordena(copas, contC);
    ordena(espadas,contE);
    ordena(ouros,contO);
    ordena(paus,contP);

//Adicionando aos vetores
    for(int i = 0; i < contC; i++){
        naipe[contTAM] = 'c';
        numero[contTAM] = copas[i];
        contTAM++;
    }
    for(int i = 0; i < contE; i++){
        naipe[contTAM] = 'e';
        numero[contTAM] = espadas[i];
        contTAM++;
    }
    for(int i = 0; i < contO; i++){
        naipe[contTAM] = 'o';
        numero[contTAM] = ouros[i];
        contTAM++;
    }
    for(int i = 0; i < contP; i++){
        naipe[contTAM] = 'p';
        numero[contTAM] = paus[i];
        contTAM++;
    }

// Imprimir
    for(int i = 0; i < contTAM; i++){
        cout << naipe[i] << " " << numero[i] << endl;

    }

}
int main()
{
    ordenaCartas();
    return 0;
}
