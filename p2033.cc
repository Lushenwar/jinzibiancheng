#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    string s,s1,s2;
    int a,b,x,y,t;
    cin>>s;
    a = s.find("*");
    b = s.find("=");
    s1 = s.substr(0,a);
    s2 = s.substr(a+1,b);
    x = stoi(s1);
    y = stoi(s2);
    t = x*y;
    cout<<t;
}
