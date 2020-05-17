#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int max,count=0;
    cin >> n;
    while(n>0){
        if(n%2==1){
        count++;
        if(count>max)
        max=count;
        }
        else{
            count=0;
        }
        n=n/2;
    }
    cout<<max;
    
    return 0;
}
