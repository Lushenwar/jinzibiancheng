#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[100],c;
    string he = "";
    cin>>a;
    cin>>c;
    for(int i = 0;i<strlen(a);i++){
        if(a[i]!=c){
            he+=a[i];
        }
    }
    cout<<he;

}
