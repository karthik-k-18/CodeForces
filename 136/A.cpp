//
// Created by karth on 29-09-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool check(int i,int j,int n,int m){
    if((i<1 or i>n) or (j<1 or j>m)){
        return true;
    }
    return false;
}

void TestCase() {
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(check(i+2,j+1,n,m) and check(i+2,j-1,n,m) and check(i-2,j+1,n,m) and check(i-2,j-1,n,m) and
                    check(i+1,j+2,n,m) and check(i+1,j-2,n,m) and check(i-1,j+2,n,m) and check(i-1,j-2,n,m) ){
                cout<<i<<" "<<j<<"\n";
                return;
            }
        }
    }
    cout<<n<<" "<<m<<"\n";
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