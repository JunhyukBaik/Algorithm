#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    queue<int> myQ;
    
    for (int i = 1; i <= N; i++) {
        myQ.push(i);
    }
    
    while (myQ.size() > 1) {
        myQ.pop();
        myQ.push(myQ.front());
        myQ.pop();
    }
    cout << myQ.front();
}