#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int n,n1,tem;
    string s;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(int i=0;i<n;i++){
        cin>>n1;
        cin>>s;
        tem=vec[i];
        for(int j=0;j<n1;j++){
            if(s[j]=='U'){
                tem-=1;
                if(tem<0){
                    tem+=10;
                }
            }
            else{
                tem+=1;
                tem=abs(tem)%10;
            }
        }
        vec[i]=tem;
    }
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<"\n";

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