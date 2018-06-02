#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   srand(time(NULL));
  int n;
    cout << "DIGITE A ORDEM DA MATRIZ" << endl;
    cin >> n;
    int a[n][n];
     for(int i = 0; i < n; i++){
        for(int j = 0; j< n; j++){
            a[i][j] = 1 + rand()%10;
        }
    }
    int b[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j< n; j++){
            b[i][j] = a[i][j] + a[j][i];
        }
    }
    cout << "MATRIZ ORIGINAL" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <n ; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n \n MATRIZ TRANSPOSTA" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <n ; j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    cout << "\n \n SOMA" << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j <n ; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
