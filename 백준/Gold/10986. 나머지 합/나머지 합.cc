#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<long> S(n, 0);
    vector<long> C(m, 0);
    
    cin >> S[0];
    
    long anw = 0;
    
    for (int i = 1; i < n; i++){
        int tmp;
        cin >> tmp;
        S[i] = S[i-1] + tmp;
    }
    
    for (int i = 0; i < n; i++){
        int rem = S[i] % m;
        if (rem == 0)
            anw++;
        C[rem]++;
    }
    
    for (int i = 0; i < m; i++){
        if (C[i] >= 2)
            anw = anw + (C[i] * (C[i] - 1) / 2);
    }
    
    cout << anw;
    
    return 0;
}