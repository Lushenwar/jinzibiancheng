#include <iostream>
using namespace std;
int main()
{
    string s,b;
    int co = 0;
    cin>>b;
    cin>>s;
    int a = s.find(b);
    if(a!=string::npos){
        co+=1;
        int c = s.find(b, a+1);
        if(c!=string::npos){
            co +=1;
            int d = s.find(b, c+1);
            if(c!=string::npos){
                co +=1;
            }
        }
    }
    cout<<co;
    return 0;
}
