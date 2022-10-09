#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int n,m;
    string s;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=0;j<m;j++){
            arr[i][j]=s[j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]=='R'){
                int flag=0;
                for(int x=0;x<n;x++){
                    for(int y=0;y<m;y++){
                        if(arr[x][y]=='R'){
                            if(x-i<0 or y-j<0){
                                flag=1;
                                break;
                            }
                        }
                    }
                    if(flag==1){
                        break;
                    }
                }
                if(flag==0){
                    cout<<"YES"<<"\n";
                    return;
                }
            }
        }
    }
    cout<<"NO"<<"\n";
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