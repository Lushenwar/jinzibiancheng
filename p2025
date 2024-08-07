#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string c;
    int a = 1;
    getline(cin, c);
    if(isalpha(c[0])||c[0]=='_'){
        for(int i = 1;i<c.size();i++){
            if(isalpha(c[i])||isdigit(c[i])||c[i]=='_'){
                a++;
            }
        }
        if(a==c.size()){
        cout<<"yes";
        }
        else{
            cout<<"no";
        }
    }
    else{
        cout<<"no";
    }
    return 0;
}
