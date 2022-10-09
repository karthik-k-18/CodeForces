#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,m,tem,count=0;
    cin>>n>>m;
    vector<ll>vec(n);
    for(ll i=0;i<n;i++){
        cin>>tem;
        count+=tem;
    }
    if(m>=count){
        cout<<0<<"\n";
        return;
    }
    cout<<count-m<<"\n";

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