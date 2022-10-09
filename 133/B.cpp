//
// Created by karth on 05-08-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        vec[i]=i+1;
    }
    int point=0;
    for(int j=1;j<=n;j++){
        for(int i=0;i<n;i++){
            cout<<vec[i]<<" ";
        }
        cout<<"\n";
        swap(vec[point],vec[point+1]);
        point+=1;
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
