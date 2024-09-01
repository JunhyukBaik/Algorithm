#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    cin >> N;
    cin >> M;
    
    vector<int> v(N, 0);
    
    for (int i = 0; i < N; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());
    
    int cnt = 0;
    
    int start_idx = 0;
    int end_idx = N - 1;
    
    while (start_idx < end_idx) {
        if (v[start_idx] + v[end_idx] < M) {
            start_idx++;
        }
        else if (v[start_idx] + v[end_idx] == M) {
            cnt++;
            start_idx++;
            end_idx--;
        }
        else {
            end_idx--;
        }
    }
    
    cout << cnt;
    
    return 0;
}