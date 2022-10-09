#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll x;
    cin>>x;
    if(x==1){
        cout<<3<<"\n";
        return;
    }
    if(x%2==1){
        cout<<1<<"\n";
        return;
    }
    ll count=1;
    for(ll i=1;i<=30;i++){
        count*=2;
        if(x==count){
            cout<<x+1<<"\n";
            return;
        }
    }
    x=x/2;
    count=1;
    while(x%2!=1){
        x/=2;
        count+=1;
    }
    ll ans=pow(2,count);
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