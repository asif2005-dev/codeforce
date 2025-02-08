#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b;
    cin>>a>>b;
 
    long long int a1 = pow(a,b);
    a1 = a1%10;
    long long int b1 = pow(b,a);
    b1 = b1%10;
    cout << a1-b1 << endl;
}