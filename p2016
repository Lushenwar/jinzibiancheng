#include <iostream>
using namespace std;
int main()
{
    string s,b;
    getline(cin, s);
    cin>>b;
    int a = s.find(b);
    if(a!=string::npos){
        cout<<a+1;
        cout<<endl;
        int c = s.find(b, a+1);
        if(c!=string::npos){
            cout<<c+1;
        }
    }
    else{
        cout<<a;
    }
    return 0;
}
