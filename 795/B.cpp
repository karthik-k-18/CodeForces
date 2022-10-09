#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,count=0;
    cin>>n;
    vector<ll>vec(n);
    unordered_map<ll,ll>hash;
    for(ll i=0;i<n;i++){
        cin>>vec[i];
        hash[vec[i]]+=1;
    }
    for(auto p:hash){
        if(p.second==1){
            cout<<-1<<"\n";
            return;
        }
    }
    ll tem=0;
    for(ll i=0;i<n-1;i++){
        if(vec[i]==vec[i+1]){
            cout<<i+2<<" ";
        }
        else{
            cout<<tem+1<<" ";
            tem=i+1;
        }
    }
    cout<<tem+1<<"\n";
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