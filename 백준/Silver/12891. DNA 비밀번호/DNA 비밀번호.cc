#include <iostream>
#include <string>
using namespace std;

int main()
{
    int S, P;
    cin >> S >> P;
    
    string DNA;
    cin >> DNA;
    
    int cnt[100] = {};
    int ACGT[100] = {};

    cin >> cnt['A'];
    cin >> cnt['C'];
    cin >> cnt['G'];
    cin >> cnt['T'];
    
    int i = 0;
    int j = P - 1;
    
    int rst = 0;
    
    for (int k = i; k <= j; k++)
        ACGT[DNA[k]]++;

    while (j < S) {
        if (ACGT['A'] >= cnt['A'] && ACGT['C'] >= cnt['C'] && ACGT['G'] >= cnt['G'] && ACGT['T'] >= cnt['T'])
            rst++;
        ACGT[DNA[i++]]--;
        ACGT[DNA[++j]]++;
    }
    
    cout << rst;
    
    return 0;
}