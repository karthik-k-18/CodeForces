#include<bits/stdc++.h>

using namespace std;
#define ll long long
bool check(ll i,string &s,unsigned long long tem){
    unordered_map<char,int>um;
    for(ll j=i;j<i+tem;j++){
        um[s[j]]+=1;
    }
    if(um.size()==tem){
        return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin>>s;
        unordered_map<char,int>m;
        for(char c:s){
            m[c]+=1;
        }

        auto tem=m.size();
        bool var;
        int flag=0;
        for(ll i=0;i<=s.length()-tem;i++){
            var=check(i,s,tem);
            if(!var){
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"yes"<<"\n";
        else cout<<"no"<<"\n";
    }
    return 0;
}