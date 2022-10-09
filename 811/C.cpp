//
// Created by karth on 02-08-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int s;
    cin>>s;
    vector<int>vec;
    for(int i=9;i>=1;i--){
        if(s>=i){
            s-=i;
            vec.push_back(i);
            if(s==0){
                break;
            }
        }else{
            vec.push_back(s);
            break;
        }
    }
    for(auto it=vec.rbegin();it!=vec.rend();it++){
        cout<<*it;
    }
    cout<<"\n";

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