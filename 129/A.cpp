#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,m,x,y;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    vector<ll>b(m);
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }
    x=*max_element(a.begin(),a.end());
    y=*max_element(b.begin(),b.end());
    if(x>=y){
        cout<<"Alice"<<"\n";
    }
    else{
        cout<<"Bob"<<"\n";
    }
    if(y>=x){
        cout<<"Bob"<<"\n";
    }
    else{
        cout<<"Alice"<<"\n";
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