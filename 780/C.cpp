#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;
    while (tc--) {
       string s;
       cin>>s;
       vector<bool>vec(26,false);
       ll count=0;
       for(auto &i:s){
           if(!vec[i - 'a']){
               vec[i - 'a']=true;
           }
           else if(vec[i-'a']){
               count+=2;
               for(int j=0;j<26;j++){
                    vec[j]= false;
               }
           }
       }
       cout<<s.size()-count<<"\n";


    }
    return 0;
}