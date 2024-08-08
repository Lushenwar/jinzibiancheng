#include <iostream>
#include <algorithm>
using namespace std;
int a[1010];

int main()
{
    int n, k = 0, b,c=0;
    cin>>n;
    while(n!=0){
        int yu = n%10;
        a[k] = yu;
        k++;
        n = n / 10;
    }
    sort(a,a+k);
    for(int i = 0;i<k;i++){
        cout<<a[i];
    }

    return 0;
}
