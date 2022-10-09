#include<bits/stdc++.h>

using namespace std;
#define ll long long

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
    for(ll i=0;i<=n/2;i++){
        front+=vec[i];
    }
    back=total-front;
    while(q--){
        cur=0;
        flag=0;
        cin>>tem;
        ans=0;
        if(tem>total){
            cout<<-1<<"\n";
            continue;
        }
//        else if(tem==total){
//            cout<<n<<"\n";
//            continue;
//        }
        if(tem<=back){
            for(ll i=n-1;i>=0;i--){
                cur+=vec[i];
                ans+=1;
                if(cur>=tem){
                    cout<<ans<<"\n";
                    flag=1;
                    break;
                }
            }
        }else{
            ans=n-n/2-1;
            cur=back;
            for(ll i=n/2;i>=0;i--){
                cur+=vec[i];
                ans+=1;
                if(cur>=tem){
                    cout<<ans<<"\n";
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            cout<<-1<<"\n";
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