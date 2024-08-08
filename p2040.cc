#include <iostream>
using namespace std;
string s;
int c = 0;
int main()
{
    getline(cin,s);
    s = " "+s;
    for(int i = 1;i<s.size();i++){
        if(isalpha(s[i])&&!isalpha(s[i-1])){
            c++;
        }
    }
    cout<<c;
    return 0;
}
