#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n, m, tem,a,b;
    cin >> n >> m;
    vector<vector<ll>> vec;
    vector<ll> arr;
    unordered_map<ll,ll>h;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> tem;
            arr.emplace_back(tem);
        }
        vec.emplace_back(arr);
        arr.clear();
    }
    for (ll i = 0; i < n; i++) {
        int count = 0;
        for (ll j = 0; j < m; j++) {
            if (j == 0) {
                if (vec[i][j] > vec[i][j + 1]) {
                    count++;
                    h[j]+=1;
                }
            }else if (j == m - 1) {
                if (vec[i][j] < vec[i][j - 1]) {
                    count++;
                    h[j]+=1;
                }
            } else {
                if (vec[i][j] > vec[i][j + 1] or vec[i][j] < vec[i][j - 1]) {
                    count++;
                    h[j]+=1;
                }
            }
        }
        if(count==1 or count>2){
            cout<<-1<<"\n";
            return;
        }
    }
    if(h.size()>2){
        cout<<-1<<"\n";
        return;
    }
    if(h.empty()){
        cout<<1<<" "<<1<<"\n";
        return;
    }
    arr.clear();
    for(auto p:h){
        arr.emplace_back(p.first);
    }
    sort(arr.begin(),arr.end());
    a=arr[0];
    b=arr[1];
    for(ll i=0;i<n;i++){
        if(a==0 or b==m-1){
            if(b==m-1 and a==0){
                if(vec[i][b]>vec[i][1] or vec[i][a]<vec[i][m-1]){
                    cout<<-1<<"\n";
                    return;
                }
            }else if(b==m-1 and a!=0){
                if(vec[i][a]<vec[i][m-1] or vec[i][b]<vec[i][b-1] or  vec[i][b]>vec[i][b+1] ){
                    cout<<-1<<"\n";
                    return;
                }
            }
            else{
                if(vec[i][b]>vec[i][1] or vec[i][a]<vec[i][a-1] or  vec[i][a]>vec[i][a+1] ){
                    cout<<-1<<"\n";
                    return;
                }
            }
        }else{
            if(vec[i][a]<vec[i][a-1] or  vec[i][a]>vec[i][a+1] or vec[i][b]<vec[i][b-1] or  vec[i][b]>vec[i][b+1]){
                cout<<-1<<"\n";
                return;
            }
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