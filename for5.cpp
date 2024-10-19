#include <iostream>
using namespace std;

int main() {
    double a;
    int n;
    cin >> a >> n;

    double sum = 1.0; 
    double term = 1.0; 
    for (int i = 1; i <= n; i++) {
        term *= a; 
        sum += term;
    }
    cout << sum << endl; 
    return 0;
}
