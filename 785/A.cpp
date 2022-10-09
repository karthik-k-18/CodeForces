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
        ll count=0;
        for(char i : s){
            count+=(i+1-'a');
        }
        if(s.length()%2==0){
            cout<<"Alice"<<" "<<count<<"\n";
        }
        else{
            ll x=s[0]+1-'a';
            ll y=s[s.length()-1]+1-'a';
            ll a=0,b=0;
            if(x>y){
                a=count-y;
                b=y;
            }
            else{
                a=count-x;
                b=x;
            }
            if(a>b){
                cout<<"Alice"<<" "<<a-b<<"\n";
            }
            else{
                cout<<"Bob"<<" "<<b-a<<"\n";
            }
        }

    }
    return 0;
}