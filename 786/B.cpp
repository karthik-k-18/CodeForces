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
        int a,b;
        a=25*(s[0]-'a');
        b=s[1] + 1 -'a';
        if(b<=(s[0]-'a')){
            cout<<a+b<<"\n";
        }
        else cout<<a+b-1<<"\n";
    }
    return 0;
}