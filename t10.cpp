#include <iostream>

using namespace std;

int main() {
    int n;
    
    
    cin >> n;
    const int minday = 1440;

    n = n % minday;

    
    int h = n / 60; 
    int min = n % 60;


    cout << h << " " << min << endl;
}
