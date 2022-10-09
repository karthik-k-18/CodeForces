#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n,l=0,r=0;
    string s;
    cin>>n>>s;
    char tem=s[n/2];
    ll i=(n/2)+1;
    while(i<n){
        if(s[i]==tem){
            r++;
            i++;
        }
        else{
            break;
        }
    }
    i=(n/2)-1;
    while(i>=0){
        if(s[i]==tem){
            l++;
            i--;
        }
        else{
            break;
        }

    }
    cout<<1+l+r<<"\n";

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