#include <iostream>

using namespace std;
bool maiuscula(char ch){
    if(ch >= 65 && ch <= 90)
        return true;
    else
        return false;
}
int main()
{
    char ch;
    cin >> ch;
    cout << maiuscula(ch) << endl;
    return 0;
}
