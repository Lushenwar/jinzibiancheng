#include <iostream>
#include <algorithm>
using namespace std;
int n;
string s[105];

bool a(string n, string n1)
{
    if(n+n1>n1+n){
        return true;
    }
    else
        return false;
}
int main()
{
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>s[i];
    }
    sort(s, s+n, a);
    for(int i = 0;i<n;i++){
        cout<<s[i];
    }
    return 0;
}
