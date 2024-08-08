#include <iostream>
using namespace std;
int main()
{
    string s = "",a,b,c;
    cin>>a;
    cin>>b;
    c = a+b;
    for(int i = 0;i<c.size();i++){
        if(s.find(c[i])==-1){
            s+=c[i];
        }
    }
    cout<<s;
    return 0;
}
