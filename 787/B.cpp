#include<bits/stdc++.h>

using namespace std;
#define ll long long

pair<ll,ll> solve(ll x,ll y){
    ll count=0;
    pair<ll,ll>pr;
    while(x>=y){
        if(x==0){
            pr.first=x;
            pr.second=count;
            return pr;
        }
        x=x/2;
        count+=1;
    }
    pr.first=x;
    pr.second=count;
    return pr;
}

void TestCase() {
    ll n,tem,count=0;
    cin>>n;
    vector<ll>vec;
    pair<ll,ll>pr;
    for(ll i=0;i<n;i++){
        cin>>tem;
        vec.emplace_back(tem);
    }
    for(ll i=n-2;i>=0;i--){
        if(vec[i]>=vec[i+1]){
            pr=solve(vec[i],vec[i+1]);
            vec[i]=pr.first;
            if(vec[i]==vec[i+1]){
                cout<<-1<<"\n";
                return;
            }
            count+=pr.second;
        }
    }
    cout<<count<<"\n";

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