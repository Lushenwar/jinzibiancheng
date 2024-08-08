#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string k = "";
    int i = 0;
    while(s[i]=='*'){
        k+=s[i];
        i++;
    }
    string w = "";
    int j = s.size()-1;
    while(s[j]=='*'){
        w+=s[j];
        j--;
    }
    string z = "";
    for(int a=i; a<=j; a++){
        if(s[a]!='*')
            z += s[a];
    }
    cout<<k<<z<<w;
}
