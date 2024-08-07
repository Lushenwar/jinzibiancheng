#include <iostream>
#include <algorithm>
using namespace std;
char a[255],b[255],c[255];
int main()
{
    string s;
    int aa=0,bb=0;
    cin>>s;
    for(int i  = 0;i<s.size();i++){
        if(isupper(s[i])){
            a[aa] = s[i];
            aa++;
        }
        else if(islower(s[i])){
            b[bb] = s[i];
            bb++;
        }
    }
    for(int j = 0;j<aa;j++){
        c[j]=a[j];
    }
    for(int j = 0;j<bb;j++){
        c[j+aa]=b[j];
    }
    swap(c[2],c[0]);
    for(int i = 0;i<aa+bb;i++){
        cout<<c[i];
    }
    return 0;
}
