#include <iostream>
using namespace std;

int main() 
{
    int exp;
    float base, res = 1;

    cout << "Enter base and exponent respectively:";
    cin >> base >> exp;

    cout << base << "^" << exp << " = ";

    while (exp!= 0) {
        res*= base;
        --exp;
    }

    cout << res;
    
    return 0;
}
