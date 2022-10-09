#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,odd=0,even=0;
    cin>>n;
    vector<ll>vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]%2==0){
            even++;
        } else{
            odd++;
        }
    }
    if(even>=odd){
        cout<<odd<<"\n";
    }else{
        cout<<even<<"\n";
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