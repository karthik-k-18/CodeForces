#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,ans,x=1,y=1;
    cin >> n;
    vector<ll>vec(n),a(n),b(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    if(vec.size()==1){
        cout<<1<<"\n";
        return;
    }
    sort(vec.begin(),vec.end());
    a.push_back(vec[0]);
    b.push_back(vec[1]);
    ll j=1,k=1;
    for(ll i=2;i<n;i++){
        if(x<=y){
            a[j]=vec[i];
            if(a[j-1]!=a[j]){
                x+=1;
            }
            j+=1;
        }else{
            b[k]=vec[i];
            if(b[k-1]!=b[k]){
                y+=1;
            }
            k+=1;
        }
    }
    cout<<max(x,y)<<"\n";
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