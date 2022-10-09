//
// Created by karth on 03-08-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int>hash;
    for(int i=0;i<n;i++){
        hash[s[i]]+=1;
    }
    int len=hash.size();
    cout<<2*len+(n-len)<<"\n";



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