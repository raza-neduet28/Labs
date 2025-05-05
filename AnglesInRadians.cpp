#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double y, precision = 0.0001;
    cout << "Enter Your angle in radians: ";
    cin >>y;
    double term = y;
    double sum = y;
    int n = 1;
    while (fabs(term) >= precision) {
        term *= -1 * y * y / ((2*n)*(2*n+1));
        sum += term;
        n++;
    }
    cout << "sin(" << y << ") = " << sum << endl;
    return 0;
}
