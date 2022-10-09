#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    string s;
    cin>>s;
    int a=s[0]+s[1]+s[2];
    int b=s[3]+s[4]+s[5];
    if(a==b){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }

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