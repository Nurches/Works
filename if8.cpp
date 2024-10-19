#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    if (abs(r1 - r2) == abs(c1 - c2)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
