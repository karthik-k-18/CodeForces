//
// Created by karth on 12-09-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,zeros=0;
    cin>>n;
    string s;
    string ans;
    cin>>s;
    for(char i : s){
        if(i=='0'){
            zeros+=1;
        }
    }
    ll x=n-2*(zeros);
    vector<char>arr(x,-1);
    vector<int>vec(26);
    for(int i=0;i<26;i++){
        if(i<=8){
            vec[i]=i+1;
        }else{
            vec[i]=(i+1)*10;
        }
    }
    unordered_map<int ,char>hash;
    for(int i=0;i<26;i++){
        hash[vec[i]]=97+i;
    }

    ll i=0;

    while(i<n){
        string tem;
        if(i+2<=n-1){
            for(int j=i;j<(i+3);j++){
                tem+=s[j];
            }
        }else{
            tem+=s[i];
            ans+=hash[stoi(tem)];
            i+=1;
            continue;
        }
        if(i+3<=n-1 and s[i+3]=='0' and s[i+2]=='0'){
            ans+=hash[stoi(tem.substr(0,1))];
            tem+='0';
            ans+=hash[stoi(tem.substr(1))];
            i+=4;
            continue;
        }
        if(hash.count(stoi(tem))==1){
            ans+=hash[stoi(tem)];
            i+=3;
        }else{
            tem.clear();
            tem+=s[i];
            ans+=hash[stoi(tem)];
            i+=1;
        }
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