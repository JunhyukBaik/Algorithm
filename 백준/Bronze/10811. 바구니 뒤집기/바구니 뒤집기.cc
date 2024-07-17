#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
        v[i] = i + 1;
    
    for (int i = 0; i < m; i++){
        int ii, jj;
        cin >> ii >> jj;
        ii += -1; jj += -1;
        
        while (ii <= jj){
            swap(v[ii], v[jj]);
            ii++;
            jj--;
        }
    }
    
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    
    return 0;
}