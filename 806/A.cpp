//
// Created by karth on 03-08-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    string s,s1;
    char c;
    cin>>s;
    for(auto &ch:s){
        c= tolower(ch);
        s1+=c;
    }
    if(s1=="yes"){
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