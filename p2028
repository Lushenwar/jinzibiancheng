#include <iostream>
#include <algorithm>
using namespace std;
int a[1005];
int main()
{
    int n,b,k = 0;
    cin>>b;
    for(int i = 0;i<b;i++){
        cin>>n;
        while(n!=0){
            int yu = n%10;
            a[k] = yu;
            k++;
            n = n / 10;
        }
    }
    sort(a,a+k);
    reverse(a,a+k);
    for(int i = 0;i<k;i++){
        cout<<a[i];
    }
    return 0;
}
