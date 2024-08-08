#include <iostream>
using namespace std;
int main()
{
    int t = 0;
    string s;
    cin>>s;
    for(int i = 0;i<s.size();i++){
        t++;
        if(i == s.size()-1||s[i]!=s[i+1]){
            if(t!=1){
                cout<<t<<s[i];
            }
            else{
                cout<<s[i];
            }
            t = 0;
        }
    }
    return 0;
}
