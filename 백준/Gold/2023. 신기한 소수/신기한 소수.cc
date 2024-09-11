#include <iostream>
#include <vector>
using namespace std;
int N;

bool isPrime(int n) {
    for (int i = 2; i <= n/2; i++)
        if (n % i == 0)
            return false;
    return true;
}

void DFS(int v, int j) {
    if (j == N) {
        if(isPrime(v))
            cout << v << '\n';
        return;
    }
    for (int i = 1; i <= 9; i++) {
        if (i % 2 == 0)
            continue;
        if (isPrime(v * 10 + i))
            DFS(v*10+i, j+1);
    }
}

int main()
{
    cin >> N;
    DFS(2,1);
    DFS(3,1);
    DFS(5,1);
    DFS(7,1);
    
    return 0;
}