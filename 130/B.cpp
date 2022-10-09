#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,q,x,y;
    cin>>n>>q;
    vector<ll>vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for(ll i=n-2;i>=0;i--){
        vec[i]+=vec[i+1];
    }
    while(q--){
        cin>>x>>y;
        ll total=vec[n-x];
        if(x==y){
            cout<<total<<"\n";
            continue;
        }
        cout<<total-vec[n-(x-y)]<<"\n";
    }


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    tc=1;
    while (tc--) {
        TestCase();
    }
    return 0;
}