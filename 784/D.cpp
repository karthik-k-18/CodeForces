#include<bits/stdc++.h>

using namespace std;
#define ll long long

pair<bool,ll> find(char c,ll num,string &s){
    pair<bool,ll>pr;
    if(c=='r'){
        for(ll j=num; j!=s.size() and s[j]!='w';j++){
            if(s[j]=='r'){
                for(ll k=j;k<=s.size() ;k++){
                    if(k==s.size()){
                        pr={true,k};
                        return pr;
                    }
                    if(s[k]=='w'){
                        pr={true,k};
                        return pr;
                    }
                }
            }
        }
        pr={false,3};
        return pr;
    }else{
        for(ll j=num;j!=s.size() and s[j]!='w';j++){
            if(s[j]=='b'){
                for(ll k=j;k<=s.size();k++){
                    if(k==s.size()){
                        pr={true,k};
                        return pr;
                    }
                    if(s[k]=='w'){
                        pr={true,k};
                        return pr;
                    }
                }
            }
        }
        pr={false,5};
        return pr;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--) {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll i=0;
        int flag=0;
        pair<bool,ll>pr;
        while(i<n){
            if(s[i]=='b'){
                pr=find('r',i,s);
                if(!pr.first){
                    cout<<"no"<<"\n";
                    flag=1;
                }
                i=pr.second;
                continue;
            }
            if(s[i]=='r'){
                pr=find('b',i,s);
                if(!pr.first){
                    cout<<"no"<<"\n";
                    flag=1;
                }
                i=pr.second;
                continue;
            }
            if(s[i]=='w'){
                i++;
            }
        }
        if(flag==0){
            cout<<"yes"<<"\n";
        }
    }
    return 0;
}