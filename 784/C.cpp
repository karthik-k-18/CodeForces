#include<bits/stdc++.h>

using namespace std;
#define ll long long

bool check(vector<int>&vec,int x){
    if(x%2==0){
        for(auto ele:vec){
            if(ele%2!=0){
                return false;
            }
        }
        return true;
    } else{
        for(auto ele:vec){
            if(ele%2==0){
                return false;
            }
        }
        return true;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin >> tc;
    while (tc--) {
        int n,tem;
        cin>>n;
        vector<int>vec1,vec2;
        for(int i=0;i<n;i++){
            cin>>tem;
            if((i+1)%2!=0){
                vec1.emplace_back(tem);
            }
            else{
                vec2.emplace_back(tem);
            }
        }
        int a=vec1[0],b=vec2[0];
        bool x1=check(vec1,a);
        bool x2=check(vec2,b);
        if(!x1 or !x2){
            cout<<"no"<<"\n";
        }
        else{
            cout<<"yes"<<"\n";
        }

    }
    return 0;
}