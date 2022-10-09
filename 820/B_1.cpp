//
// Created by karth on 12-09-2022.
// Created by karth on 12-09-2022.8
//

#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,zeros=0;
    cin>>n;
    string s,ans;
    cin>>s;
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
        tem+=s[i];
        if(i==n-1){
            ans+=hash[stoi(tem)];
            break;
        }else if(i+1==n-1){
            ans+=hash[stoi(tem)];
            tem.clear();
            tem+=s[i+1];
            ans+=hash[stoi(tem)];
            i+=2;
        }else if (s[i+1]=='0'){
            tem.clear();
            if(s[i]=='1'){
                ans+='j';
            }
            else{
                ans+='t';
            }
            i+=3;
        }else if(s[i+2]=='0'){
            if(i+3!=n and s[i+3]=='0'){
                ans+=hash[stoi(tem)];
                i+=1;
            }else{
                tem+=s[i+1];
                tem+=s[i+2];
                ans+=hash[stoi(tem)];
                i+=3;
            }
        }else{
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