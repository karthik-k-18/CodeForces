#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase(){
    string s,t;
    cin>>s>>t;
    for(char i : t){
        if(i=='a'){
            if(t.length()==1){
                cout<<1<<"\n";
                return;
            }
            cout<<-1<<"\n";
            return;
        }
    }
    cout<<pow(2,s.length())<<"\n";
    return;

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