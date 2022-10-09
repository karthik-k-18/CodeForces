#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,m,tem=0;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    vector<ll>b(m);
    for(ll i=0;i<m;i++){
        cin>>b[i];
        tem+=b[i];
        tem%=n;
    }
    cout<<a[tem]<<"\n";

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