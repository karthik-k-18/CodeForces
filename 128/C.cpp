#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    string s;cin>>s;
    ll zero=0,one=0;
    vector<ll>vec,a0(s.length(),0),b0(s.length(),0),a1(s.length(),0),b1(s.length(),0);
    for(ll i=0;i<s.length();i++){
        if(s[i]=='1'){
            vec.emplace_back(i);
            a1[i]+=1;
            b1[i]+=1;
            one+=1;
        }else{
            zero+=1;
            a0[i]+=1;
            b0[i]+=1;
        }
    }
    if(s.length()==one or s.length()==zero){
        cout<<0<<"\n";
        return;
    }
    for(ll i=1;i<s.length();i++){
        a0[i]+=a0[i-1];
        a1[i]+=a1[i-1];
    }
    for(ll i=s.length()-2;i>=0;i--){
        b0[i]+=b0[i+1];
        b1[i]+=b1[i+1];
    }
    ll ans=zero,removed=0,remain=0;
    for(ll i=0;i<vec.size()-1;i++){
        for(ll j=i+1;j<vec.size();j++){
            ll tem=0;
            removed=a1[vec[i]]+b1[vec[j]]-2;
            remain=zero-a0[vec[i]]-b0[vec[j]];
            tem= max(remain,removed);
            ans=min(tem,ans);
        }
    }
    cout<<ans<<"\n";

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