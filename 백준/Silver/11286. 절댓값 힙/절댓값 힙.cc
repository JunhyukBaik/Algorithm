#include <iostream>
#include <queue>
using namespace std;

struct compare {
    bool operator()(int o1, int o2) {
        int f_abs = abs(o1);
        int s_abs = abs(o2);
        if (f_abs == s_abs)
            return o1 > o2;
        else
            return f_abs > s_abs;
    }
};

int main()
{
    priority_queue<int, vector<int>, compare> myQ;
    
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int rq;
        cin >> rq;
        
        if (rq == 0) {
            if (myQ.empty())
                cout << "0\n";
            else {
                cout << myQ.top() << "\n";
                myQ.pop();
            }
        }
        else
            myQ.push(rq);
    }
}