#include<bits/stdc++.h>

using namespace std;
#define ll long long

//ll rd(vector<vector<ll>>vec,int i,int j,ll n,ll m){
//    ll var=0;
//    while(i+1<n and j+1<m){
//        var+=vec[i+1][j+1];
//        i+=1;
//        j+=1;
//    }
//    return var;
//}
//ll ld(vector<vector<ll>>vec,int i,int j,ll n,ll m){
//    ll var=0;
//    while(i+1<n and j-1>=0){
//        var+=vec[i+1][j-1];
//        i+=1;
//        j-=1;
//    }
//    return var;
//}
//ll lu(vector<vector<ll>>vec,int i,int j,ll n,ll m){
//    ll var=0;
//    while(i-1>=0 and j-1>=0){
//        var+=vec[i-1][j-1];
//        i-=1;
//        j-=1;
//    }
//    return var;
//}
//ll ru(vector<vector<ll>>vec,int i,int j,ll n,ll m){
//    ll var=0;
//    while(i-1>=0 and j+1<m){
//        var+=vec[i-1][j+1];
//        i-=1;
//        j+=1;
//    }
//    return var;
//}

void TestCase() {
    int n,m;
    ll tem;
    cin>>n>>m;
    vector<ll>just;
    vector<vector<ll>>vec;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>tem;
            just.emplace_back(tem);
        }
        vec.emplace_back(just);
        just.clear();
    }
    ll ci,cj,ans=-1,count,var;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ci=i;cj=j;var=0;
            while(ci+1<n and cj+1<m){
                var+=vec[ci+1][cj+1];
                ci+=1;
                cj+=1;
            }
            ci=i;cj=j;
            while(ci-1>=0 and cj+1<m){
                var+=vec[ci-1][cj+1];
                ci-=1;
                cj+=1;
            }
            ci=i;cj=j;
            while(ci-1>=0 and cj-1>=0){
                var+=vec[ci-1][cj-1];
                ci-=1;
                cj-=1;
            }
            ci=i;cj=j;
            while(ci+1<n and cj-1>=0){
                var+=vec[ci+1][cj-1];
                ci+=1;
                cj-=1;
            }
            count=var+vec[i][j];
            ans= max(ans,count);
        }
    }
    cout<<ans<<"\n";
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