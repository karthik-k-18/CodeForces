#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    ll n;cin>>n;
    ll count=3;
    ll a=3,b=2,c=1;
    n-=6;
    while(n){
      a+=1;
      n-=1;
      if(n==0){
          break;
      }
      b+=1;
      n-=1;
        if(n==0){
            break;
        }
      c+=1;
      n-=1;
    }
    cout<<b<<" "<<a<<" "<<c<<"\n";


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