#include<bits/stdc++.h>

using namespace std;
int main(){
    char a[10000000], b[10000000];

    scanf("%s", &a);
    scanf("%s", &b);

    int i=0;
    if(a[0] == '0'){
        while(a[i] == '0')i++;
    }
    int len_a = strlen(a)-i;

    int j=0;
    if(b[0] == '0'){
        while(b[j] == '0')j++;
    }
    int len_b = strlen(b)-i;

    if(len_a > len_b){
        printf(">\n");
    }
    else if(len_a < len_b){
        printf("<\n");
    }
    else{
        int comp = strcmp(a+i,b+j);
        if(comp > 0){
            printf(">\n");
        }
        else if(comp < 0){
            printf("<\n");
        }
        else{
            printf("=\n");
        }
    }
  
}