#include <iostream>
using namespace std;
int main()
{
    string s,b;
    cin>>s;
    cin>>b; //ab$ba$a
    int a = s.find(b);
    while(a!=-1){
        s.erase(a, 1);
        a = s.find(b);
    }
    cout<<s;
    return 0;
}
