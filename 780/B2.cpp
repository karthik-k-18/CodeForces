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
        vector<ll>vec;
        for(ll i=0;i<n;i++){
            cin>>tem;
            vec.emplace_back(tem);
        }
        sort(vec.begin(),vec.end());
        if(n>=2){
            if(vec[n-1]-vec[n-2]>1) cout<<"no"<<"\n";
            else cout<<"yes"<<"\n";
        }
        else{
            if(vec[0]==1) cout<<"yes"<<"\n";
            else cout<<"no"<<"\n";
        }
    }
    return 0;
}