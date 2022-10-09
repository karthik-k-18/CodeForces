#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int l1,l2,r1,r2,tem;
    cin>>l1>>r1>>l2>>r2;
    if(l1<=l2){
        tem=max(l1,l2);
        if(l2<=r1){
            cout<<tem<<"\n";
        }
        else{
            cout<<l1+l2<<"\n";
        }
    }else{
        tem=max(l1,l2);
        if(l1<=r2){
            cout<<tem<<"\n";
        }
        else{
            cout<<l1+l2<<"\n";
        }
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