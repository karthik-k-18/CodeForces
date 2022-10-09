//
// Created by karth on 30-09-2022.
//
#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int n;
    ll total=0;
    bool flag= true;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        total+=b[i];
    }
    vector<int>zero,one;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            zero.push_back(b[i]);
        }else{
            one.push_back(b[i]);
        }
    }
    sort(zero.begin(),zero.end());
    sort(one.begin(),one.end());
    if(zero.empty() or one.empty()){
        cout<<total<<"\n";
        return;
    }
    total=0;
    vector<pair<int,int>>vec(n);
    int i=zero.size()-1;
    int j=one.size()-1;
    while(i!=-1 and j!=-1){
        if(zero[i]>one[j]){
            vec.push_back(make_pair(0,zero[i]));
            i-=1;
        }else if(one[j]>zero[i]){
            vec.push_back(make_pair(1,one[j]));
            j-=1;
        }else{

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