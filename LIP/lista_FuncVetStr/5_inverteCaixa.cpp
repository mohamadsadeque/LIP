#include <iostream>
#include <ctype.h>
#include <cstring >
#define TAM 50
using namespace std;
char str[TAM];

void invert(char str[]){
    for(int i = 0; i < strlen(str)+1; i++){
        if(isalpha(str[i])){
            if(str[i] <= 90 ){
                str[i] = tolower(str[i]);
            }
            else
                str[i] = toupper(str[i]);
        }
    }
}
int main()
{
    cin.getline(str , TAM);
    invert(str);
    cout << str;
    return 0;
}
