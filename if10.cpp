#include <iostream>
using namespace std;

int main() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if (abs(a1 - a2) <= 1 && abs(b1 - b2) <= 1) 
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    return 0;
}
