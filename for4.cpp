#include <iostream>
using namespace std;

int main() {
    int n, k , c=1, c2=1, c3=1;
    cin>>n>>k;
    for (int i=1; i<=n; i++){
        c*=i;
    }
    for (int i=1; i<=k; i++){
        c2*=i;
    }
    for (int i=1; i<=n-k; i++){
        c3*=i;
    }
    cout<<c/(c2*c3);
}
