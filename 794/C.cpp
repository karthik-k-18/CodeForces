#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll q,a,x,mini=INT_MAX,maxi=INT_MIN,c;
    cin>>q;
    map<ll,ll>hash;
    while(q--){
        cin>>a;
        if(a==1){
            cin>>x;
            hash[x]+=1;
        }
        else if(a==2){
            cin>>x>>c;
            if(hash[x]<=c){
                hash.erase(x);
            }else{
                hash[x]-=c;
            }
        }
        else{
            maxi=(*hash.rbegin()).first;
            mini=(*hash.begin()).first;
            cout<<maxi-mini<<"\n";
        }

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    TestCase();
    return 0;
}