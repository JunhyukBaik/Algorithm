#include <iostream>
using namespace std;

int fact(int n)
{ 
    if (n == 0)
        return 1;
    else {
        int rst = 1;
        for (int i = n; i >= 1; i--)
            rst = rst * i;
        return rst;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    
    cout << fact(n) / (fact(n-k)*fact(k));
}