#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int h,w,x=0,y=0,dis=0;
    cin>>h>>w;
    string s;
    for(int i=0;i<h;i++){
        cin>>s;
        for(int j=0;j<w;j++){
            if(s[j]=='o'){
                dis=abs(x-i)+abs(y-j);
                x=i;
                y=j;
            }
        }
    }
    cout<<dis;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    TestCase();
    return 0;
}