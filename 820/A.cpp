//
// Created by karth on 12-09-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    string s,ans="",tem,temp;
    cin>>s;
    ll n= s.length();
    vector<int>a(n),b(n);
    for(ll i=0;i<n;i++){
        a[i]=int(s[i]-'0');
    }
    b[n-1]=a[n-1];
    for(ll i=n-2;i>=0;i--){
        b[i]=min(b[i+1],a[i]);
    }
    for(ll i=0;i<n;i++){
        if(a[i]==b[i]){
            ans+= to_string(a[i]);
        }
        else{
            int mini=min(9,a[i]+1);
            ans+= to_string(mini);
        }
    }
    sort(ans.begin(),ans.end());
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