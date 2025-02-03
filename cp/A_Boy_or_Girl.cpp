#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a;

    sort(a.begin(), a.end());
    //a.erase(unique(a.begin(),a.end()),a.end());

    for(int i=0;a[i];i++){
        if(a[i]!=a[i+1]){
            b = b + a[i];
        }
    }
   
    if(b.size()%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}