#include <iostream>
#include <string>
using namespace std;

int main(){
    string obj, grade;
    double point;
    
    double sum = 0;
    double hakjum = 0;
    
    for (int i = 0; i < 20; i++){
        cin >> obj >> point >> grade;
        if (grade == "A+")
            sum += 4.5*point;
        else if (grade == "A0")
            sum += 4.0*point;
        else if (grade == "B+")
            sum += 3.5*point;
        else if (grade == "B0")
            sum += 3.0*point;
        else if (grade == "C+")
            sum += 2.5*point;
        else if (grade == "C0")
            sum += 2.0*point;
        else if (grade == "D+")
            sum += 1.5*point;
        else if (grade == "D0")
            sum += 1.0*point;
        
        if (grade != "P")
            hakjum += point;
    }
    
    cout << sum / hakjum;
    return 0;
}