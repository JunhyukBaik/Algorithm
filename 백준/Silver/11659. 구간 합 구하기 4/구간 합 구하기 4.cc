#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    int s[100001] = {};
    
    for (int i = 1; i <= n; i++){
        int tmp;
        cin >> tmp;
        s[i] = s[i-1] + tmp;
    }
    
    for (int a = 0; a < m; a++){
        int i, j;
        cin >> i >> j;
        
        cout << s[j] - s[i-1] << '\n';
    }
    
    return 0;
}