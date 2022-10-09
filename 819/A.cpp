//
// Created by karth on 06-09-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int n;
    cin>>n;
    vector<int>vec(n);
    int mini=INT_MAX,maxi=INT_MIN;

    for(int i=0;i<n;i++){
        cin>>vec[i];
        mini=min(mini,vec[i]);
        maxi=max(maxi,vec[i]);
    }
    if(n==1){
        cout<<0<<"\n";
        return;
    }
    int ans=vec[n-1]-vec[0];
    for(int i=0;i<n-1;i++){
        ans=max(vec[i]-vec[i+1],ans);
    }
    int ans1=max(maxi-vec[0],vec[n-1]-mini);
    ans=max(ans,ans1);
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