//
// Created by karth on 08-09-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n;
    cin>>n;
    vector<ll>vec(n);
    ll maxi=INT_MIN;
    ll index;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]>maxi){
            maxi=vec[i];
            index=i+1;
        }
    }
    cout<<index<<"\n";
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