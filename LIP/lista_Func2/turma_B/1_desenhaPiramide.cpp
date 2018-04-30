#include <iostream>

using namespace std;

void desenhaPiramide(int base){
    int media  = (base+1)/2;
    int x = media - 1;
    int o = 1;
    for(int i = media; i > 0; i--){
        for(int j = 0; j < x; j++){
            cout << " ";
        }
        for(int k = 0; k < o; k++){
            cout << "*";
        }

        x--;
        o+=2;
        cout << "\n";

    }

}

int main()
{
    int numero;
    cin >> numero;
    while(numero < 5 || numero%2 == 0){
            cin >> numero;
    }
    desenhaPiramide(numero);
    return 0;
}
