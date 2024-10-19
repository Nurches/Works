#include <iostream>
using namespace std;

int main() {
    int sysAns, stuAns;
    cin >> sysAns >> stuAns;

    if ((sysAns == 1 && stuAns == 1) || (sysAns != 1 && stuAns != 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
