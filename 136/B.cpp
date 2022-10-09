//
// Created by karth on 29-09-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int n,tem;cin>>n;
    vector<int>d(n),a(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    a[0]=d[0];
    for(int i=1;i<n;i++){
        if(a[i-1]-d[i]<0 or (a[i-1]+d[i]==a[i-1]-d[i])){
            a[i]=a[i-1]+d[i];
        }
        else{
            cout<<-1<<"\n";
            return;
        }
    }
    for(auto i:a){
        cout<<i<<" ";
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