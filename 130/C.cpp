#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,j;
    cin>>n;
    string s,t;
    cin>>s>>t;
    bool flag;
    unordered_map<char,vector<ll>>hash1,hash2;
    for(ll i=0;i<n;i++){
        hash1[s[i]].push_back(i);
        hash2[t[i]].push_back(i);
    }
    ll x=0,y=0,z=0;
    ll a=hash1['a'].size(),b=hash1['b'].size(),c=hash1['c'].size();
    for(ll i=0;i<n;i++){
        if(s[i]==t[i]){
            if(s[i]=='a'){
                x+=1;
            }else if(s[i]=='b'){
                y+=1;
            }else{
                z+=1;
            }
            continue;
        }else if(s[i]=='a' and t[i]=='b'){
            if(b==y){
                cout<<"no"<<"\n";
                return;
            }
            if(z!=c and hash1['c'][z]< hash1['b'][y]){
                cout<<"no"<<"\n";
                return;
            }
            swap(s[i],s[hash1['b'][y]]);
            y+=1;
        }else if(s[i]=='b' and t[i]=='c'){
            if(c==z){
                cout<<"no"<<"\n";
                return;
            }
            if(x!=a and hash1['c'][x]< hash1['b'][z]){
                cout<<"no"<<"\n";
                return;
            }
            swap(s[i],s[hash1['c'][z]]);
            z+=1;

        }else{
            cout<<"no"<<"\n";
            return;
        }
    }
    cout<<"yes"<<"\n";

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