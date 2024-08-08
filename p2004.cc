#include <iostream>
using namespace std;

bool pol(string s,int endnum){
    bool f=false;
    if((endnum+1)%2 == 0){
        f = true;
        for(int i=0; i<=endnum/2; i++){
            if(s[i] != s[endnum-i]){
                f = false;
                break;
            }
        }
    }else{
        f = false;
    }
    return f;
}

int main(){
    string s;
    cin>>s;
    int endnum = s.size()-1;
    while(pol(s, endnum)==true){
        endnum /= 2;
    }
    cout << endnum + 1;
    return 0;
}
