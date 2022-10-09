#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--) {
        ll n,tem;
        cin>>n;
        vector<ll>vec;
        for(ll i=0;i<n;i++){
            cin>>tem;
            vec.emplace_back(tem);
        }
        int flag=0;
        sort(vec.begin(),vec.end());
        for(auto it=vec.begin();it!=vec.end();++it){
            if(*it==1){
                vec.erase(it);
            }else{
                break;
            }
        }
        if(vec.size()>=2){
            for(ll i=vec.size()-1;i>0;i--){
                if(vec[i]-vec[i-1]>1){
                    flag=1;
                    cout<<"no"<<"\n";
                    goto go;
                }
            }
        }
        else if(vec.empty()) {
            cout<<"yes"<<"\n";
            goto go;
        }
        else if(vec.size()==1){
            if(vec[0]==1) cout<<"yes"<<"\n";
            else cout<<"no"<<"\n";
            goto go;
        }
        if(flag==0){
            cout<<"yes"<<"\n";
        }
        go:
        flag=2;

    }
    return 0;
}