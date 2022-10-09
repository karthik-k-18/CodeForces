#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    vector<ll>vec(4);
    cin>>vec[0]>>vec[1]>>vec[2]>>vec[3];
    ll a=vec[0];
    sort(vec.begin(),vec.end());
    for(ll i=0;i<4;i++){
        if(a==vec[i]){
            cout<<3-i<<"\n";
            return;
        }
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