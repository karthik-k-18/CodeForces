#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n;
    cin>>n;
    vector<ll>vec(n);
    vector<bool>arr(n, true);
    vector<ll>ans;
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    if(n==1){
        cout<<-1<<"\n";
        return;
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(arr[j] and (j+1)!=vec[i]){
                arr[j]=false;
                ans.push_back(j+1);
                break;
            }
        }
    }
    if(ans.size()==n-1){
        ll tem=ans[n-2];
        ans[n-2]=n;
        ans.push_back(tem);
    }
    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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