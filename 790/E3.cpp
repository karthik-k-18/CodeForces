#include<bits/stdc++.h>

using namespace std;
#define ll long long


void TestCase() {
    ll n,q,tem,total=0,low,high,mid,index;
    cin>>n>>q;
    vector<ll>vec;
    for(ll i=0;i<n;i++){
        cin>>tem;
        vec.emplace_back(tem);
        total+=tem;
    }
    sort(vec.begin(), vec.end());
    for(ll i=n-2;i>=0;i--){
        vec[i]+=vec[i+1];
    }
    while(q--){
        ll ans=INT_MAX;
        cin>>tem;
        if(tem>total){
            cout<<-1<<"\n";
            continue;
        }
        low=0;high=n-1;
        while(low<=high){
            mid=low+(high-low)/2;
            if(low==high){
                if(vec[low]>=tem){
                    ans=abs(low-n);
                }
                break;
            }
            if(vec[mid]==tem){
                ans=abs(mid-n);
                break;
            }
            else if(vec[mid]>tem){
                ans=min(ans,abs(mid-n));
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        cout<<ans<<"\n";

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