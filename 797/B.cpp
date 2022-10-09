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
    for (ll i = 0; i < n; i++) {
        if (b[i] > a[i]) {
            cout << "no" << "\n";
            return;
        }
    }
    ll index = -1;
    for (ll i = 0; i < n; i++) {
        if (b[i] > 0) {
            index = i;
            dif = a[i] - b[i];
            break;
        }
    }
    if (index == -1) {
        ll x=a[0];
        for(ll i=0;i<n;i++){
            if(a[i]!=x){
                cout << "no" << "\n";
                return;
            }
        }
        cout << "yes" << "\n";
        return;
    }
    for(ll i=0;i<n;i++){
        if(b[i]!=0){
            if(dif!=a[i]-b[i]){
                cout << "no" << "\n";
                return;
            }
        }else{
            if(a[i]>dif){
                cout << "no" << "\n";
                return;
            }
        }
    }
    cout << "yes" << "\n";
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