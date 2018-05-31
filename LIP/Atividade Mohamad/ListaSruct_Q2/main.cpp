#include <iostream>
#define TAM 3
using namespace std;

struct local{
    float latitude;
    float longitude;
};

struct nacao{
    char nome[40];
    char capital[40];
    char idioma[40];
    float area;
    int populacao;
    local coordenadas;
};

nacao pais[TAM];


int main()
{
    for(int i = 0; i < TAM; i++ ){
        cout << "NOME:" <<endl;
        cin.getline(pais[i].nome , 40);
        cout << "CAPITAL:" <<endl;
        cin.getline(pais[i].capital, 40);
        cout << "IDIOMA:" <<endl;
        cin.getline(pais[i].idioma,40);
        cout << "AREA:" << endl;
        cin >> (pais[i].area);
        cout << "POPULACAO:" <<endl;
        cin >> (pais[i].populacao);
       cout << "LATITUDE" <<endl;
        cin >> (pais[i].coordenadas.latitude);
        cout << "LONGITUDE" <<endl;
        cin >> (pais[i].coordenadas.longitude);

    }
    cout << pais[0].nome << " " << pais[2].nome << endl;

}
