//
// Created by karth on 02-10-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,ans=INT_MIN;
    cin>>n;
    unordered_map<ll,ll>hash;
    ll a=2,b=4,c=n,index;
    while(a!=n-3){
        while(b!=n-1){
            ll l1=a-1,l2=b-a-1,l3=c-b-1;
            ll tem=min(abs(l1-l2),min(abs(l2-l3), abs(l1-l3)))-1;
            if(tem>ans){
                ans=tem;
                index=b;
            }
            b+=1;
        }
        a+=1;
    }
    cout<<ans<<" "<<index;

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