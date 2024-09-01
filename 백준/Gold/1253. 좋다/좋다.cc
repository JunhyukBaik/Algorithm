#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> vt(N, 0);
    for (int i = 0; i < N; i++)
        cin >> vt[i];

    sort(vt.begin(), vt.end());

    int cnt = 0;

    for (int k = 0; k < N; k++) {
        int find = vt[k];
        int i = 0;
        int j = N - 1;

        while (i < j) {
            if (vt[i] + vt[j] == find) {
                if (i != k && j != k) {
                    cnt++;
                    break;
                }
                else if (i == k)
                    i++;
                else if (j == k)
                    j--;
            }
            else if (vt[i] + vt[j] < find) {
                i++;
            }
            else
                j--;
        }
    }

    cout << cnt;

    return 0;
}