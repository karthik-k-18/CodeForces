//
// Created by karth on 15-09-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,count=0;cin>>n;
    vector<ll>x(n),y(n);
    for(ll i=0;i<n;i++){
        cin>>x[i];
    }
    for(ll i=0;i<n;i++){
        cin>>y[i];
    }
    for(ll i=0;i<n;i++){
        y[i]-=x[i];
    }
    sort(y.begin(),y.end());
    ll begin=0,end=n-1;
    while(begin<end){
        if(y[begin]+y[end]>=0){
            count+=1;
            begin+=1;
            end-=1;
        }else{
            begin+=1;
        }
    }
    cout<<count<<"\n";
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