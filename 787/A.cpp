#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if(a>=x){
        if((b+c)>=y){
            cout<<"YES"<<"\n";
            return;
        }
        else{
            cout<<"NO"<<"\n";
            return;
        }
    }else{
        if(b>=y){
            if(a+c>=x){
                cout<<"YES"<<"\n";
                return;
            }else{
                cout<<"NO"<<"\n";
                return;
            }
        }else{
            if(((x-a)+(y-b))<=c){
                cout<<"YES"<<"\n";
                return;
            }else{
                cout<<"NO"<<"\n";
                return;
            }
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