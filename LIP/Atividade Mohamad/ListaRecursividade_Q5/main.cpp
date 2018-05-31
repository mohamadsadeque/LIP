/*
5. Os termos de uma serie de Tribonacci sao definidos pela seguinte recursao:
        0, n = 1
t(n) =  0, n = 2
        1, n = 3
        t(n-1) + t(n-2) + t(n-3), n > 3
Escreva uma funcão recursiva t, que receba como par^ametro um numero inteiro n e que
retorne o valor do enesimo termo da serie de Tribonacci. Por exemplo, para n igual a
1, a funcao deve retornar o valor 0, que e o primeiro termo da serie. Para n igual a 3, a
funcao deve retornar o valor 1, que e o terceiro termo da serie. Em seguida, para testar
a funcao t, faca um programa em C++ que imprima na tela o valor dos 50 primeiros
elementos da serie de Tribonnaci. Utilize a func~ao t para calcular o valor de cada termo
da serie.
*/

#include <iostream>

using namespace std;



unsigned long long int tribonacci(int n){
    while(n <= 0){
    cout << "Termo não existe,digite novamente:" << endl;
    cin >> n;
    }

    if(n == 1 || n == 2)
        return 0;
    else if( n == 3)
        return 1;
/*    else if( n == 28)   // Para o computador conseguir chegar ao termo 50 mais rápido, executei uma vez, e salvei os termos onde ele começava a ter dificuldade para calcular
        return 8646064;
    else if( n == 29)
        return 15902591;
    else if(n == 30)
        return 29249425; */
    else
        return (tribonacci(n-1) +tribonacci(n-2) + tribonacci(n-3) );

}

int main()
{
    for(int i =1; i <= 50 ; i++){
        cout <<  i << " : " <<tribonacci(i) << endl;
    }
    return 0;
}
