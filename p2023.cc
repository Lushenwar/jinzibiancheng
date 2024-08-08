#include <iostream>
using namespace std;
int main()
{
    string s,b,c,d;
    getline(cin, s);
    cin>>b;
    if(b == "R"){
        cin>>c>>d;
        int a = s.find(c);
        while(a!=-1){
            s.replace(a, c.size(), d);
            a = s.find(c, a+d.size());
        }
    }
    if(b=="I"){
        cin>>c>>d;
        int a = s.rfind(c);
        s.insert(a+1, d);
        
    }
    if(b=="D"){
        cin>>c;
        int a = s.find(c);
        s.erase(a, c.size());
    }
    cout<<s;
    return 0;
}
