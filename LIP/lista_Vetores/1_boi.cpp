#include <iostream>

using namespace std;
float maisPesado = -9999;
float maisLeve = 9999;
float media = 0;
int numMaisLeve,numMaisPesado;
int main()
{
    int n;
    cin >> n;
    float num[n];
    float peso[n];
    for(int i = 0; i<n; i++){
        cout << "numero" << endl;
        cin >> num[i];
        cout << "peso" << endl;
        cin >> peso[i];
        media = media + (peso[i] / n);
        if(peso[i] < maisLeve){
            numMaisLeve = i;
        }
        if(peso[i] > maisPesado){
            numMaisPesado = i;
        }
    }

    cout << "Media: "  << media <<  endl;
    cout << "Numero mais pesado: " << num[numMaisPesado]<< " Peso: " << peso[numMaisPesado] << endl;
    cout << "Numero mais Leve: " << num[numMaisLeve]   << " Peso: " << peso[numMaisLeve] << endl;
    return 0;
}
