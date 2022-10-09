#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    string s;
    cin>>s;
    if(s.length()==1){
        cout<<1<<"\n";
        return;
    }
    if(s[0]=='0' or s[s.length()-1]=='1'){
        cout<<1<<"\n";
        return;
    }
    ll x=0,count=1,var=0,i;
    for(i=0;i<s.length();i++){
        if(s[i]=='0'){
            x=i;
            break;
        }
    }
    ll m=s.length();
    if(i==s.length()){
        cout<<m<<"\n";
        return;
    }
    if(i==s.length()-1){
        cout<<1<<"\n";
        return;
    }
    for(i=x-1;i>=0;i--){
        if(s[i]=='1'){
            var+=1;
        }
        if(var==1){
            count++;
            cout<<count<<"\n";
            return;
        }
        count++;
    }
    cout<<count<<"\n";
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