//
// Created by karth on 03-08-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int n,x;
    cin>>n>>x;
    if(x<n){
        cout<<"-1"<<"\n";
        return;
    }
    if(x==n){
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<"\n";
        return;
    }
    int tem=(x-n)+1;
    cout<<tem<<" ";
    for(int i=1;i<=n;i++){
        if(i==tem){
            continue;
        }else{
            cout<<i<<" ";
        }
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