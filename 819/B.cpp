//
// Created by karth on 06-09-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,m;
    cin>>n>>m;
    if(n>m or (n%2==0 and m%2==1)){
        cout<<"no"<<"\n";
        return;
    }
    if(n==m){
        cout<<"yes"<<"\n";
        for(ll i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<"\n";
        return;
    }
    if(n%2==1){
        cout<<"yes"<<"\n";
        for(ll i=0;i<n-1;i++){
            cout<<1<<" ";
        }
        cout<<m-(n-1)<<"\n";
        return;
    }
    cout<<"yes"<<"\n";
    ll x=(m-(n-2))/2;
    for(ll i=0;i<n-2;i++){
        cout<<1<<" ";
    }
    cout<<x<<" "<<x<<"\n";
    return;
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