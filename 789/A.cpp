#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int n,tem;
    cin>>n;
    vector<int>vec;
    map<int,int>m;
    int var=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>tem;
        vec.emplace_back(tem);
        m[tem]+=1;
        var=min(var,tem);
    }
    sort(vec.begin(),vec.end());
    if(var==0){
        cout<<n-m[0]<<"\n";
        return;
    }else if(n==m.size()){
        cout<<n+1<<"\n";
        return;
    }
    else{
        cout<<n<<"\n";
        return;
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