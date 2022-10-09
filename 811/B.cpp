//
// Created by karth on 02-08-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,tem;
    cin>>n;
    unordered_map<ll,ll>hash;
    vector<ll>vec;
    for(ll i=0;i<n;i++){
        cin>>tem;
        vec.push_back(tem);
    }
    for(ll i=n-1;i>=0;i--){
        hash[vec[i]]+=1;
        if(hash.size()!=(n-i)){
            cout<<i+1<<"\n";
            return;
        }
    }
    cout<<0<<"\n";



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