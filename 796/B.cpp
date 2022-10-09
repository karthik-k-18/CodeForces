#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,even=0,odd=0;
    cin>>n;
    vector<ll>vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
        if(vec[i]%2==0){
            even+=1;
        }else{
            odd+=1;
        }
    }
    if(odd==n){
        cout<<0<<"\n";
        return;
    }
    if(even!=n){
        cout<<even<<"\n";
        return;
    }
    ll bit=INT_MAX;
    for(ll i=0;i<n;i++){
        if(vec[i]%2==0){
            ll tem=vec[i],count=0;
            while(tem%2==0){
                tem/=2;
                count+=1;
            }
            bit=min(bit,count);
        }
    }
    cout<<bit+even-1<<"\n";
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