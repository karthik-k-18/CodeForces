#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;cin >> tc;
    while (tc--) {
        string s;cin>>s;
        char c;cin>>c;
        int flag=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                if(i%2==0 and (s.length()-(i+1))%2==0){
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1) cout<<"yes"<<"\n";
        else cout<<"no"<<"\n";
    }
    return 0;
}