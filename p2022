#include <iostream>
using namespace std;
int main()
{
    string s,b,c;
    getline(cin, s);
    cin>>b;
    cin>>c;
    int a = s.find(b);
    while(a!=-1){
        s.replace(a, b.size(), c);
        a = s.find(b, a+c.size());
    }
    cout<<s;
    return 0;
}
