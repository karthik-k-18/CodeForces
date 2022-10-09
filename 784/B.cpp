#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--) {
        ll n,tem;
        cin>>n;
        unordered_map<ll,ll> oye;
        for(ll i=0;i<n;i++){
            cin>>tem;
            oye[tem]+=1;
        }
        ll x=oye.size();
        ll count=0;
        for(auto pr:oye){
            count= max(count,pr.second);
            if(count>=3){
                tem=pr.first;
                break;
            }
        }
        if(count>=3) cout<<tem<<"\n";
        else cout<<-1<<"\n";
    }
    return 0;
}