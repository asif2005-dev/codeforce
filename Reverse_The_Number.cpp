#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for( int i=0; i<t; i++ ){
        int n,rev = 0;
        cin >> n;
        while(n){
            rev = rev*10 + n%10;
            
            n /= 10;
        }
        
        cout << rev << endl;
    }
}