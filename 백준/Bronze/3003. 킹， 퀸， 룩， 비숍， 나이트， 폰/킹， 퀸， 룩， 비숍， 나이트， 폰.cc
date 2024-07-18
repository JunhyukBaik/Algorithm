#include <iostream>
using namespace std;

int main(){
    int chess[6] = {1, 1, 2, 2, 2, 8};
    
    for (int i = 0; i < 6; i++){
        int chs;
        cin >> chs;
        
        cout << chess[i] - chs << ' ';
    }
    
    return 0;
}