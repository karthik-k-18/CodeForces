#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n;
    cin>>n;
    vector<ll>vec(n);
    unordered_map<ll,ll>hash;
    for(ll i=0;i<n;i++){
        cin>>vec[i];
        hash[vec[i]]+=1;
    }
    ll tem=n-hash.size();
    ll x=hash.size();
    if(tem%2==0){
        cout<<x<<"\n";
        return;
    }
    cout<<x-1<<"\n";

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