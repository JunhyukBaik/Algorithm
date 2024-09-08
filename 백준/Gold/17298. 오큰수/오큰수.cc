#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> vt(N, 0);
    vector<int> rsts(N, 0);
    for (int i = 0; i < N; i++)
        cin >> vt[i];
    
    stack<int> st;
    st.push(0);
    
    for (int i = 1; i < N; i++) {
        while (!st.empty() && vt[i] > vt[st.top()]) {
            rsts[st.top()] = vt[i];
            st.pop();
        }
        st.push(i);
    }
    
    while (!st.empty()) {
        rsts[st.top()] = -1;
        st.pop();
    }
    
    for (int i = 0; i < N; i++)
        cout << rsts[i] << ' ';
    
    return 0;
}