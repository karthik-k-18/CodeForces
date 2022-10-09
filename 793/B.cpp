#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,x=0,cur;
    cin>>n;
    vector<ll>vec(n);
    unordered_map<ll,ll>h;
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    for(ll i=0;i<n;i++){
        if(vec[i]!=i){
            while(vec[i]!=i){
                swap(vec[i],vec[vec[i]]);
                cur=vec[i]&vec[vec[i]];
                h[cur]+=1;
            }
        }
    }
    if(h.size()>1){
        cout<<0<<"\n";
    }
    else{
        cout<<cur<<"\n";
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