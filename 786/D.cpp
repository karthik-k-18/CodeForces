#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll tem,n;
    cin>>n;
    vector<ll>vec,a;
    for(ll i=0;i<n;i++){
        cin>>tem;
        vec.emplace_back(tem);
        a.emplace_back(tem);
    }
    sort(vec.begin(),vec.end());
    if(vec.size()%2==1 and vec[0]!=a[0]) {
        cout<<"NO"<<"\n";
        return;
    }
    if(vec.size()%2==1){
        for(ll i=1;i<n;i+=2){
            if((vec[i]==a[i] and vec[i+1]==a[i+1]) or (vec[i+1]==a[i] and vec[i]==a[i+1])){
                continue;
            }
            cout<<"NO"<<"\n";
            return;
        }
        cout<<"YES"<<"\n";
    }else{
        for(ll i=0;i<n;i+=2){
            if((vec[i]==a[i] and vec[i+1]==a[i+1]) or (vec[i+1]==a[i] and vec[i]==a[i+1])){
                continue;
            }
            cout<<"NO"<<"\n";
            return;
        }
        cout<<"YES"<<"\n";
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