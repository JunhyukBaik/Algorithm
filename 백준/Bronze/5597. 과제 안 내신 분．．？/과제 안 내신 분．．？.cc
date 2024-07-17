#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v(30, 0);
    
    for (int i= 0; i < 28; i++){
        int student;
        cin >> student;
        
        v[student-1] = 1;
    }
    
    for (int i = 0; i < 30; i++){
        if (v[i] == 0)
            cout << i + 1 << endl;
    }
    
    return 0;
}