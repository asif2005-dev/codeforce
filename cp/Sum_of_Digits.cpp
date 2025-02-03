#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	int n;
	
	for (int i= 1; i<=t; i++){
	    cin >> n;
        int digit_sum = 0;
	    while(n){
	        int last_digit = n%10;
	        digit_sum = digit_sum + last_digit;
	        n = n / 10;
	    }
	    cout << digit_sum << endl;
	}
    

}
