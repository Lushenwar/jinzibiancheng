#include <iostream>
using namespace std;

int gcd(int a, int b){
    int yu;
    while(b!=0){
        yu=a%b;
        a=b;
        b=yu;
    }
    return a;
}

string s,s1,s2,fz1,fm1,fz2,fm2;
int a1,b1,a2,b2;
int p;
int r1,r2;
int t;

int main()
{
    cin >> s;  // 1/12+5/12
    p = s.find("+");
    if(p == -1){
        p = s.find("-");
    }
    s1 = s.substr(0, p);
    s2 = s.substr(p+1);
    //cout << s1 << s2;

    fz1 = s1.substr(0, s1.find("/"));
    fm1 = s1.substr(s1.find("/")+1);

    fz2 = s2.substr(0, s2.find("/"));
    fm2 = s2.substr(s2.find("/")+1);

    a1 = stoi(fz1);
    b1 = stoi(fm1);
    a2 = stoi(fz2);
    b2 = stoi(fm2);

    r2 = b1*b2;

    if(s.find('+')!=-1){
        r1 = a1*b2 + b1*a2;
    }else{
        r1 = a1*b2 - b1*a2;
        if(r1 < 0){
            cout << "-";
            r1 = r1*-1;
        }
    }

    t = gcd(r1, r2);
    if(r1 % r2 == 0){
        cout <<r1/r2;
    }else{
        cout <<r1/t << "/" << r2/t;
    }

    return 0;
}
