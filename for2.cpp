#include <iostream>
using namespace std;

int main() {
    int n, count=1;
    cin>>n;
    for (int i=1; i<=n; i++){
        count*=i;
    }
    cout<<count;
}
