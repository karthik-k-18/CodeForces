#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll search_min(vector<ll>&vec,ll tem,ll low,ll high){
    if(low<=high){
        if(low==high){
            if(vec[low]>=tem){
                return low;
            }
        }
        ll mid=low+(high-low)/2;
        if(vec[mid]==tem){
            return mid;
        }
        else if(vec[mid]>tem){
            return search_min(vec,tem,mid,high);
        }
        else{
            return search_min(vec,tem,low,mid-1);
        }

    }
}

void TestCase() {
    ll n,q,tem,total=0,cur=0,ans,flag=0,front=0,back=0;
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
    back=total-front;
    while(q--){
        cin>>tem;
        if(tem>total){
            cout<<-1<<"\n";
            continue;
        }
        ans =search_min(vec,tem,0,n-1);
        if(ans==-1){
            cout<<-1<<"\n";
        }else{
            ll oye=abs(ans-n);
            cout<<oye<<"\n";
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