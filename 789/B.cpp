#include<bits/stdc++.h>

using namespace std;
#define ll long long

void find_odd(string&s,vector<ll>&vec){
    for(int ll i=0;i<vec.size();i++){
        if(vec[i]%2==1){

        }
    }
}

void TestCase() {
    ll n,tem,j=0;
    cin>>n;
    string s;
    cin>>s;
    vector<pair<char,ll>>vec;
    pair<char,ll>pr;
    char ch=s[0];
    vec.emplace_back(s[0],1);
    for(ll i=1;i<n;i++){
        if(s[i]==ch){
            vec[j].second+=1;
        }else{
            ch=s[i];
            j++;
            vec.emplace_back(s[i],1);
        }
    }
//    for(auto x:vec){
//        cout<<x.first<<" "<<x.second<<" ";
//    }
    int flag=0;
    for(auto var:vec){
        if(var.second%2==1){
            flag=1;
           break;
        }
    }
    if(flag==0){
        cout<<0<<"\n";
        return;
    }
//    find_odd(s,vec);
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