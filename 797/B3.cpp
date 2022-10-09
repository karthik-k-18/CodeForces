#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> b(n);
    unordered_map<ll,ll>hash;
    vector<ll>non,zero;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
        if(b[i]==0){
            zero.push_back(i);
        }
        else{
            non.push_back(i);
        }
    }
    if(a==b){
        cout << "yes" << "\n";
        return;
    }
    for (ll i = 0; i < n; i++) {
        if (b[i] > a[i]) {
            cout << "no" << "\n";
            return;
        }
    }
    for(ll i=0;i<n;i++){
        a[i]-=b[i];
        hash[a[i]]+=1;
    }
    if(hash.size()==1){
        cout << "yes" << "\n";
        return;
    }
    if(zero.size()==n){
        cout << "yes" << "\n";
        return;
    }
    ll x=a[non[0]];
    for(ll i=0;i<non.size();i++){
        if(a[non[i]]!=x){
            cout << "no" << "\n";
            return;
        }
    }
    for(ll i=0;i<zero.size();i++){
        if(a[zero[i]]>x){
            cout << "no" << "\n";
            return;
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