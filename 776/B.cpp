#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;
    while (tc--) {
        ll l,r,a,f,g=1;
        cin>>l>>r>>a;
        ll ans=INT16_MIN;
        ll tem=r/a + a-1;
        if(r==a){
            tem=r-1;
        }
        if(r<a){
            cout<<r<<"\n";
//            else cout<< max(g,r-1) <<"\n";
        }
        else if(a<=l){
            for(ll i=r,j=a;i>=l and j>0;i--,j--){
                f=i/a+i%a;
                ans=max(f,ans);
                if(ans==tem){
                    break;
                }
            }
            cout<<ans<<"\n";
        }
        else{
            ll ans1=INT16_MIN,ans2;
            for(ll i=r,j=a;i>=l and j>0;i--,j--){
                f=i/a+i%a;
                ans1=max(f,ans1);
                if(ans1==tem){
                    break;
                }
            }
            ans2=max(g,a-1);
            cout<<max(ans2,ans1)<<"\n";
        }
        }
    return 0;
}