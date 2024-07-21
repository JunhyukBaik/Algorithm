#include <iostream>
using namespace std;

int main(){
    string s5[5];
    int max_len = 0;
    
    for (int i = 0; i < 5; i++){
        cin >> s5[i];
        if (s5[i].length() > max_len)
            max_len = s5[i].length();
    }
    
    for (int i = 0; i < max_len ; i++){
        for (int j = 0; j < 5; j++){
            if (i >= s5[j].length())
                continue;
            cout << s5[j][i];
        }
    }
}