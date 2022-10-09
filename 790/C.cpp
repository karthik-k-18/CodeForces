#include<bits/stdc++.h>

using namespace std;
#define ll long long
int solve(string s1,string s2,int m){
    int var=0;
    for(int i=0;i<m;i++){
        var+= abs(s1[i]-s2[i]);
    }
    return var;
}

void TestCase() {
    int n,m,var=INT_MAX,tem;
    string s;
    cin>>n>>m;
    vector<string>vec;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>s;
        vec.emplace_back(s);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            tem= solve(vec[i],vec[j],m);
            var=min(var,tem);
        }
    }
    cout<<var<<"\n";
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