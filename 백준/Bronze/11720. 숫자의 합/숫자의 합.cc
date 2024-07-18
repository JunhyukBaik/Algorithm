#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string nums;
    
    cin >> n;
    cin >> nums;
    
    int sum = 0;
    
    for (int i = 0; i < n; i++)
        sum += nums[i] - '0';
    
    cout << sum;
    
    return 0;
}