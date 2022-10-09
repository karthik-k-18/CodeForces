#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    char arr[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<7;i++){
        for(int j=1;j<7;j++){
            if(arr[i][j]=='#'){
                if(arr[i+1][j+1]=='#' and arr[i+1][j-1]=='#' and arr[i-1][j+1]=='#' and arr[i-1][j-1]=='#' ){
                    cout<<i+1<<" "<<j+1<<"\n";
                    return;
                }
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