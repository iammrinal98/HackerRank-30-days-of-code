#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,i,j,temp;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<arr[i]<<" ";
    }

    
    

}



