#include <iostream>
using namespace std;

int main(){
    int arr[9][9];
    int max = 0;
    int max_i, max_j;
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> arr[i][j];
            if (arr[i][j] >= max){
                max = arr[i][j];
                max_i = i+1;
                max_j = j+1;
            }
        }
    }
    
    cout << max << '\n' << max_i << ' ' << max_j;
    
    return 0;
}