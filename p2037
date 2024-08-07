#include <iostream>
using namespace std;
int main()
{
    int t = 0,c = 0;
    string s,a,b = "";
    getline(cin, s);
    cin>>a;
    for(int i = 0;i<s.size();i++){
        if(isalpha(s[i])){
            b=b+s[i];
            if(s[i+1]==' '||s[i+1]=='.'){
                t++;
                c= c+b.size();
                b = "";
            }
        }
    }
    cout<<t;
    return 0;
}
