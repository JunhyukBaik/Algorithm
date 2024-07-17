#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++){
        v[i] = i + 1;
    }    
    
    int ii, jj;
    
    for (int i = 0; i < m; i++){
        cin >> ii >> jj;
        swap(v[ii-1], v[jj-1]);
    }
    
    for (int i = 0; i < n; i++){
        cout << v[i] << ' ';
    }       
    
    return 0;
}