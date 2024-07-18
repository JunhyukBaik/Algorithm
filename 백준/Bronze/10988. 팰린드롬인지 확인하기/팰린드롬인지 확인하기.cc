#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    
    int len = str.length();
    int cnt = 1;
    for (int i = 0; i <= round(double(len)/2)-1; i++){
        if (str[i] != str[len-1 - i]){
            cnt--;
            break;
        }
    }

    if (cnt)
        cout << 1;
    else
        cout << 0;
}