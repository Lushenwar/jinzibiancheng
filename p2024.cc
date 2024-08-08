#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string c;
    cin >> c;
    int aa=0,bb=0,cc=0;
    for(int i = 0;i<c.size();i++){
        if(islower(c[i])){
            aa++;
        }
        else if(isupper(c[i])){
            bb++;
        }
        else if(isdigit(c[i])){
            cc++;
        }
    }
    cout<<bb<<" "<<aa<<" "<<cc;
    return 0;
}
