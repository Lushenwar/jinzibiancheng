#include <iostream>
using namespace std;

string t(string s){
    for(int i=0; i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] + ('a'-'A');
        }
    }
    return s;
}

int main(){
    int n;
    string s1, s2;
    cin>>s1>>s2;
    if(s1.size() != s2.size())
        cout << 1;
    else if(s1 == s2)
        cout << 2;
    else if(t(s1) == t(s2))
        cout << 3;
    else
        cout << 4;


    return 0;

}
