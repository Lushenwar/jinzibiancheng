#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    string s,ss = "",s1,s2,b = "";
    int a,x,y,c;
    cin>>s;
    a = s.find("=");
    for(int i = 0;i<a;i++){
        ss+=s[i];
    }
    for(int i = a+1;i<s.size();i++){
        b+=s[i];
    }
    c = stoi(b);
    for(int i = 0;i<ss.size()-1;i++){
        s1 = ss.substr(0,i+1);
        s2 = ss.substr(i+1);
        x = stoi(s1);
        y = stoi(s2);
        if(x+y ==c){
            cout<<s1<<"+"<<s2<<"="<<b;
            break;
        }
    }
}
