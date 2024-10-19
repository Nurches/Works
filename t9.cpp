#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int m=(n/10)%10;
    int t=n/100;
    
    cout<<t+m+n%10;
}
