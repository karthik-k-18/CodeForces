#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,x=~0,cur;
    cin>>n;
    vector<ll>vec(n),arr;

    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    for(ll i=0;i<n;i++){
        if(vec[i]!=i){
            arr.push_back(vec[i]);
        }
    }
    for(int i=0;i<arr.size();i++){
        x&=arr[i];
    }
    cout<<x<<"\n";
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