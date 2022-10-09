#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tc;
    cin >> tc;
    while (tc--) {
        int x,y,a,b,tem,var=1,flag=0;
        cin>>x>>y;
        tem=y/x;
        if(x>y or (y%x)!=0) cout<<0<<" "<<0<<"\n";
        else if(x==y) cout<<1<<" "<<1<<"\n";
        else{
            for(int i=2;i<=y;i++){
                int k=0;
                var=1;
                while(var<tem){
                    var*=i;
                    k++;
                    if(var==tem){
                        flag=1;
                        a=k;
                        b=i;
                        break;
                    }
                }
                if(flag==1){
                    break;
                }
            }
            if(flag==1) cout<<a<<" "<<b<<"\n";
            else cout<<0<<" "<<0<<"\n";

        }



    }
    return 0;
}