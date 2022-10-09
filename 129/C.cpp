#include<bits/stdc++.h>

using namespace std;
#define ll long long

void solve(ll i,ll j,vector<pair<ll,ll>>&arr,vector<pair<ll,ll>>&just){
    pair<ll,ll>pr;
    for(ll x=i;x<j;x++){
        ll ind=x;
        for(ll y=x+1;y<=j;y++){
            if(arr[y].second<arr[ind].second){
                ind=y;
            }
        }
        swap(arr[x],arr[ind]);
        pr.first=x;
        pr.second=ind;
        just.emplace_back(pr);
    }
}
void TestCase() {
    ll n,cur,ind;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    vector<ll>b(n);
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    bool flag=true;
    for(ll i=1;i<n;i++){
        if(a[i]>=a[i-1] and b[i]>=b[i-1]){
            continue;
        }
        else{
            flag= false;
            break;
        }
    }
    if(flag){
        cout<<0<<"\n";
        return;
    }
    vector<pair<ll,ll>>arr(n);
    vector<pair<ll,ll>>just;
    pair<ll,ll>pr;
    for(ll i=0;i<n;i++){
        pr.first=a[i];
        pr.second=b[i];
        arr[i]=pr;
    }
    for(ll i=0;i<n-1;i++){
        cur=arr[i].first;
        ind=i;
        for(ll j=i+1;j<n;j++){
            if(arr[j].first<cur){
                cur=arr[j].first;
                ind=j;
            }
        }
        swap(arr[i],arr[ind]);
        pr.first=i;
        pr.second=ind;
        just.emplace_back(pr);
    }
    ll j=1,i=0,count;
    while(j<n){
        count=1;
        while(arr[j].first==arr[j-1].first and j<n){
            count+=1;
            j+=1;
        }
        if(count==1){
            j+=1;
        }
        else{
            solve(j-count,j-1,arr,just);
        }
    }
    for(ll k=1;k<n;k++){
        if(arr[k].second>=arr[k-1].second){
            continue;
        }
        else{
            cout<<-1<<"\n";
            return;
        }
    }
    cout<<just.size()<<"\n";
    for(auto p:just){
        cout<<p.first<<" "<<p.second<<"\n";
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