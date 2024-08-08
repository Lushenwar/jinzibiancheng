#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    s = " "+s;
    for(int i = 1;i<s.size();i++){
        if(s[i]!=' '&&s[i-1]==' '){
            cout<<char(toupper(s[i]));
        }
    }
    return 0;
}
