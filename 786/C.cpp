#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;
    while (tc--) {
        string s,t;
        cin>>s>>t;

        int flag=0;
        for(char i : t){
            if(i=='a'){
                flag=1;
                break;
            }
        }
        ll tem =pow(2,s.length());
        if(flag==1 and t.length()>1) cout<<-1<<"\n";
        else if(flag==1 and t.length()==1) cout<<1<<"\n";
        else cout<<tem<<"\n";
    }
    return 0;
}