#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n, m, tem,a,b;
    cin >> n >> m;
    vector<vector<ll>> vec1,vec2;
    vector<ll> arr;
    unordered_map<ll,ll>h;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> tem;
            arr.emplace_back(tem);
        }
        vec1.emplace_back(arr);
        sort(arr.begin(),arr.end());
        vec2.emplace_back(arr);
        arr.clear();
    }
    if(vec1==vec2){
        cout<<1<<" "<<1<<"\n";
        return;
    }
    int count=0;
    for(ll j=0;j<m;j++){
        int i=0;
        vec2[i][j]-=vec1[i][j];
        if(vec2[i][j]!=0){
            count+=1;
            h[j]+=1;
        }
    }
    if(count!=2){
        cout<<-1<<"\n";
        return;
    }
    arr.clear();
    for(auto p:h){
        arr.emplace_back(p.first);
    }
    sort(arr.begin(),arr.end());
    a=arr[0];
    b=arr[1];
    for (ll i = 1; i < n; i++) {
        count=0;
        for (ll j = 0; j < m; j++) {
            vec2[i][j]-=vec1[i][j];
            if(vec2[i][j]!=0){
                if(j!=a and j!=b){
                    cout<<-1<<"\n";
                    return;
                }
                count++;
            }
        }

        if(count!=2){
            cout<<-1<<"\n";
            return;
        }
    }
    for(int i=0;i<n;i++){
        if(vec2[i][a]+vec2[i][b]!=0){
            cout<<-1<<"\n";
            return;
        }
    }
    cout<<a+1<<" "<<b+1<<"\n";
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