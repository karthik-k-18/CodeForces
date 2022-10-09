#include<bits/stdc++.h>
#include <boost/math/common_factor.hpp>
using namespace std;
#define ll long long
#define ull unsigned long long

ull lcm(ull x,ull y){
    ull ans=max(x,y);
    while (true){
        if(ans%x==0 and ans%y==0){
            return ans;
        }
        ans+=1;
    }
}

void TestCase() {
    ull n,a,b,c,ans,x,y,z;
    cin>>n>>a>>b;
    if(a==1 or b==1){
        cout<<0;
        return;
    }
    x=n/a;
    y=n/b;
    c= boost::math::lcm(a,b) ;
    z=n/c;
    x=(x*(x+1))/2;
    y=(y*(y+1))/2;
    z=(z*(z+1)/2);
    x=x*a;
    y=y*b;
    z=z*c;
    ans=(n*(n+1))/2-x-y+z;
    cout<<ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    TestCase();
    return 0;
}