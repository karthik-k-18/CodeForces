//
// Created by karth on 12-09-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    string s;
    cin>>s;
    ll n=s.length(),m=0;
    int cost=abs(s[n-1]-s[0]);
    int low=min(s[0],s[n-1]);
    int high=max(s[0],s[n-1]);
    pair<char,ll>pr;
    vector<pair<char,ll>>vec;
    for(ll i=0;i<n;i++){
        if(s[i]>=low and s[i]<=high){
            m+=1;
            pr.first=s[i];
            pr.second=i+1;
            vec.push_back(pr);
        }
    }
    cout<<cost<<" "<<m<<"\n";
    sort(vec.begin(),vec.end());
    if(vec[0].second!=1){
        ll j,k;
        for(ll i=0;i<vec.size();i++){
            if(vec[i].second==n){
                j=i;
            }
            else if(vec[i].second==1){
                k=i;
            }
        }
        swap(vec[0],vec[j]);
        swap(vec[vec.size()-1],vec[k]);
        reverse(vec.begin(),vec.end());
    }
    for(auto i:vec){
        cout<<i.second<<" ";
    }
    cout<<"\n";
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