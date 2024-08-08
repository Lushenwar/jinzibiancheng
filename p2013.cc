#include <bits/stdc++.h>
using namespace std;
int main(){
    int h1, m1, h2, m2, t,m,times;
    cin>>m;
    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);
    t = (h2*60+m2)-(h1*60+m1);
    times = ceil(m/t);
    cout<<times;
}
