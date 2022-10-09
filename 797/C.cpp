#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n, ma = INT_MIN, mb = INT_MIN, dif;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }
    cout<<b[0]-a[0]<<" ";
    for(ll i=1;i<n;i++){
        if(a[i]>=b[i-1]){
            cout<<b[i]-a[i]<<" ";
        }
        else{
            cout<<b[i]-b[i-1]<<" ";
        }
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