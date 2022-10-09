#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,tem,ans=INT_MAX;
    cin>>n;
    tem=n;
    vector<ll>vec;
    while(true){
        vec.emplace_back(tem%10);
        ans=min(ans,tem%10);
        tem=tem/10;
        if(tem==0){
            break;
        }
    }if(vec.size()>2){
        cout<<ans<<"\n";
        return;
    }else{
        tem=n;
        int b=tem%10;
        cout<<b<<"\n";
    }
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