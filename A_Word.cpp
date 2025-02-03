#include<bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin>>word;
    int upper = 0, lower = 0, l = word.size();
    for(int i=0;i<l;i++){
        if(word[i]>='a' && word[i]<='z'){
            lower++;
        }
        else{
            upper++;
        }
    }
    if(lower > upper|| lower==upper){
        transform(word.begin(),word.end(),word.begin(),::tolower);
    }
    else{
        transform(word.begin(),word.end(),word.begin(),::toupper);
    }
    cout<<word;
}