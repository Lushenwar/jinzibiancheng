#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
bool aa(int n)
{
    bool t = true;
    if(n<=1){
        t = false;
    }
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i == 0){
            t = false;
            break;
        }
    }
    return t;
}
int main()
{
    string a,a1,a2;
    int x,y,m = INT_MAX;
    cin>>a;
    for(int i = 0;i<a.size()-1;i++){
        a1 = a.substr(0,i+1);
        a2 = a.substr(i+1);
        x = stoi(a1);
        y = stoi(a2);
        if(aa(x+y)&&(x+y<m)){
            m = x+y;
        }
    }
    if(m == INT_MAX){
        cout<<-1;
    }
    else{
        cout<<m;
    }
    return 0;
}
