#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int a,b,c;
    vector<int>vec(3);
    cin>>vec[0]>>vec[1]>>vec[2];
    b=vec[1];
    sort(vec.begin(),vec.end());
    if(b==vec[1]){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    TestCase();
    return 0;
}