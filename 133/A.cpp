//
// Created by karth on 05-08-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n;
    cin>>n;
    if(n==1 or n==-1){
        cout<<2<<"\n";
        return;
    }
    if(n%3==0){
        cout<<n/3<<"\n";
    }else{
        cout<<(n/3)+1<<"\n";
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