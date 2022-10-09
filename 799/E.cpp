#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,s,ans=0;
    cin>>n>>s;
    vector<ll>vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    ll i=0,j=1;
    ll cur=0;
    cur+=vec[0];
    if(n==1){
        if(s==1){
            cout<<0<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
        return;
    }
    while(j<n and i<n){
        cur+=vec[j];
        if(cur<s){
            j++;
        }
        else if(cur==s){
            while(j+1<n and vec[j+1]==0){
                j+=1;
            }
            ans=max(ans,j-i+1);
            if(j+1<n){
                j+=1;
            }else{
                break;
            }
        }else{
            ll x=0;
            while(x!=2){
                if(i<n){
                    if(vec[i]==1){
                        x++;
                    }
                }
                i++;
            }
            cur-=3;
        }
    }
    if(ans==0){
        cout<<-1<<"\n";
        return;
    }
    cout<<n-ans<<"\n";

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