//
// Created by karth on 03-08-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,x,y;
    cin>>n;
    x=n;
    vector<ll>vec(n,0);
    vector<ll>arr(n);
    for(ll k=0;k<n;k++){
        arr[k]=k+1;
    }
    if(n==3){
        cout<<1<<" "<<2<<" "<<3<<"\n";
        return;
    }
//    vec[0]=n;
//    vec[1]=1;
//    vec[n-1]=n-1;
//    vec[n-2]=2;
    ll i=0,j=n-1;
//    for(ll k=1;k<=n/2;k++){
//        y=x-(n-(2*k-1));
//
//    }
    ll k=n/2,var=1;
    while(k!=0){
        y=x-(n-(2*var-1));
        var+=1;
        vec[i]=x;
        vec[i+1]=y;
        i+=2;
        k-=1;
        if(k==0){
            break;
        }
        x-=1;
        y=x-(n-(2*var-1));
        var+=1;
        vec[j]=x;
        vec[j-1]=y;
        j-=2;
        k-=1;
        x-=1;
    }
    if(n%2==1){
        for(ll i=0;i<n;i++){
            if(vec[i]==0){
                vec[i]=(n/2)+1;
                break;
            }
        }
    }
    for(ll i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;
    while (tc--) {
        TestCase();
    }
    return 0;
}