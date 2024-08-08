#include <bits/stdc++.h>
using namespace std;
int main(){
    int n[100] = {0};
    char a[100],c = 'a';
    cin>>a;
    for(int i = 0;i<strlen(a)-1;i++){
        n[a[i]]++;
        if(a[i]>c){
            c = a[i];
        }
    }
    for(int i = 'a';i<=c;i++){
        cout<<char(i)<<":"<<n[i]<<" ";
    }

}
