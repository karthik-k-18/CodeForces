#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,tem,var=0,mini=INT_MAX;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tem;
        var+=tem;
        mini=min(mini,tem);
    }
    cout<<var-n*mini<<"\n";

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