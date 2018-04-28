#include <iostream>

using namespace std;
float compra[100], venda[100];
int Qnt[3] = {};

void lucro(float compra[], float venda[], int Qnt[] ){
    float PLucro;
    for(int i = 0; i < 5; i++){
        PLucro = ((venda[i] - compra[i])/compra[i])  ;
        if(PLucro < 0.1)
            Qnt[1]++;
        if(PLucro >= 0.1 && PLucro <= 0.2)
            Qnt[2]++;
        if(PLucro > 0.2)
            Qnt[3]++;
    }
}
int main()
{
    for(int i = 0; i < 5; i++ ){
        cin >> compra[i];
        cin >> venda[i];
    }
    lucro(compra, venda, Qnt);
    cout << "lucro menor do que 10%: " << Qnt[1]<< endl;
    cout << "lucro entre 10% e 20%, inclusive: " << Qnt[2]<< endl;
    cout << "lucro maior que 20%: " << Qnt[3]<< endl;


    return 0;
}
