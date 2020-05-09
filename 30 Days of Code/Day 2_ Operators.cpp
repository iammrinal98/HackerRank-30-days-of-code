#include <bits/stdc++.h>

using namespace std;





int main(){
    double meal;
    int tax,tip;
    double tipt,taxt,total;
    cin>>meal;
    cin>>tip;
    cin>>tax;
    tipt=meal*(tip*0.01);
    taxt=meal*(tax*0.01);
    total=meal+tipt+taxt;
    cout<<round(total);
}
