#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--) {
        ll a,b;
        cin>>a>>b;
        if(a==0){
            cout<<1<<"\n";
        }
        else{
            cout<<a+1+2*b<<"\n";
        }
    }
    return 0;
}