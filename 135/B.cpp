//
// Created by karth on 08-09-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int n;
    cin>>n;
    if(n%2==0){
        for(int i=n-2;i>=2;i--){
            cout<<i<<" ";
        }
        cout <<1 <<" "<<n-1<<" "<<n<<"\n";
    } else{
        for(int i=n;i>=2;i--){
            if(i==n or i==n-2 or i==1){
                continue;
            }
            cout<<i<<" ";
        }
        cout <<1 <<" "<<n-2<<" "<<n<<"\n";
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