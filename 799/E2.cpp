#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,s,ans=0;
    cin>>n>>s;
    vector<ll>vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    ll i=0,j=0;
    ll cur=0;
    while(j<n){
        if(cur+vec[j]<=s){
            cur+=vec[j];
            if(cur==s){
                ans=max(ans,j-i+1);
            }
            j++;
        }else{
            while(vec[i]!=1){
                i++;
            }
            i++;
            cur-=1;
        }
    }
    if(ans==0){
        cout<<-1<<"\n";
        return;
    }
    cout<<n-ans<<"\n";
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