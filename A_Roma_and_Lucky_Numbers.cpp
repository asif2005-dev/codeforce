#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k, count = 0;
    cin>>n>>k;
    string a;
    for(int i=0;i<n;i++){
        cin>>a;
        int lucky = 0;
        for(int j=0;j<a.size();j++){
            if(a[j]== '4' || a[j]== '7'){
                lucky++;
            }
        }
        if(lucky <=k){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}