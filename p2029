#include <iostream>
#include <algorithm>
using namespace std;
int s[1005];
int main()
{
    int n,b,k = 0;
    cin>>b;
    for(int i = 0;i<b;i++){
        cin>>n;
        s[i] = n;
    }
    sort(s,s+b);
    if(s[0]==0){
        for(int i=1; i<b; i++){
            if(s[i] != 0){
                swap(s[0], s[i]);
                break;
            }
        }
    }
    for(int i = 0;i<b;i++){
        cout<<s[i];
    }
    return 0;
}
