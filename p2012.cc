#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for (int i = 0; i<s.size(); i++)
    {
        if(s[i]>='A'&&s[i]<'Z'){
            s[i] = 'Z'+'A'-s[i];
        }
        else if(s[i]>='a'&&s[i]<'z'){
            s[i] = 'a'+'z'-s[i];
        }
    }
    cout<<s;
}
