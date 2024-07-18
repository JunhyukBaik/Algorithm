#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> S(n+1, vector<int>(n+1, 0));
    vector<vector<int>> A(n+1, vector<int>(n+1, 0));
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> A[i][j];
            
            S[i][j] = S[i][j-1] + S[i-1][j] - S[i-1][j-1] + A[i][j];
        }
    }    
    
    for (int i = 0; i < m; i++){
        int X1, X2, Y1, Y2;
        cin >> X1 >> Y1 >> X2 >> Y2;
        
        cout << S[X2][Y2] - S[X1-1][Y2] - S[X2][Y1-1] + S[X1-1][Y1-1] << '\n';
    }
    
    return 0;
}