#include<bits/stdc++.h>

using namespace std;
#define ll long long

pair<int,int> find1(int H,int M,int x,int y){
    pair<int,int>pr;
    int ans=(x-H)*60;
    ans+=(y-M);
    pr.first=ans/60;
    pr.second=ans%60;
    return pr;
}
pair<int,int> find2(int H,int M,int x,int y){
    pair<int,int>pr;
    int ans=((24-H)+(x))*60;
    ans+=(y-M);
    pr.first=ans/60;
    pr.second=ans%60;
    return pr;
}
void TestCase() {
    int n,H,M;
    cin>>n>>H>>M;
    vector<pair<int,int>>vec;
    pair<int,int>pr;
    for(int i=0;i<n;i++){
        cin>>pr.first;
        cin>>pr.second;
        vec.emplace_back(pr);
    }
    pr.first=H;
    pr.second=M;
    vec.emplace_back(pr);
    sort(vec.begin(),vec.end());
    if((vec[n].first==H and vec[n].second==M)){
        if((vec[n-1].first==H and vec[n-1].second==M)){
            cout<<0<<" "<<0<<"\n";
            return;
        }
        else{
            pr= find2(H,M,vec[0].first,vec[0].second);
            cout<<pr.first<<" "<<pr.second<<"\n";
            return;
        }
    }
    for(int i=0;i<n+1;i++){
        if(vec[i].first==H and vec[i].second==M){
            if(vec[i+1].first==H and vec[i+1].second==M){
                cout<<0<<" "<<0<<"\n";
                return;
            }
            else{
                pr= find1(H,M,vec[i+1].first,vec[i+1].second);
                cout<<pr.first<<" "<<pr.second<<"\n";
                return;
            }
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