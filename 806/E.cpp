//
// Created by karth on 03-08-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

int find(pair<int,int>a,pair<int,int>b,pair<int,int>c,pair<int,int>d,vector<vector<int>>&vec){
    int sum=vec[a.first][a.second]+vec[b.first][b.second]+vec[c.first][c.second]+vec[d.first][d.second];
    if(sum==1 or sum==3){
        return 1;
    }
    else if(sum==2){
        return 2;
    }
    else{
        return 0;
    }
}

int solve(pair<int,int>a,pair<int,int>b,pair<int,int>c,pair<int,int>d,vector<vector<int>>&vec){
    int n=b.second-a.second,ans=0;
    for(int i=0;i<n;i++){
        a.second+=i;
        b.first+=i;
        c.second-=i;
        d.first-=i;
        ans+=find(a,b,c,d,vec);
    }
    return ans;
}

void TestCase() {
    int n,ans=0;
    cin>>n;
    vector<vector<int>>vec;
    vector<int>arr(n);
    pair<int,int>a,b,c,d;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        vec.emplace_back(arr);
    }
    if(n==1){
        cout<<0<<"\n";
        return;
    }
    a={0,0};
    b={0,n-1};
    c={n-1,0};
    d={n-1,n-1};
    for(int i=0;i<n/2;i++){
        a.first+=i;
        a.second+=i;
        b.first+=i;
        b.second-=i;
        c.first+=i;
        c.second-=i;
        d.first-=i;
        d.second+=i;
        ans+=solve(a,b,c,d,vec);
    }
    cout<<ans<<"\n";
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