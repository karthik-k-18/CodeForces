#include<bits/stdc++.h>

using namespace std;
#define ll long long

ll find(vector<int>&vec,int x){
    if(vec.empty()){
        return 0;
    }
    ll tem=vec.size()-1;
    ll count=0;
    while(vec[tem]==x){
        count++;
        tem--;
    }
    return count;
}



void TestCase() {
    ll n,m,k,tem=0;
    cin>>n>>m>>k;
    string s1,s2,s3;
    vector<int>vec;
    cin>>s1>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    ll i=0,j=0;
    int flag;
    while(i<n and j<m){
        if(s1[i]<=s2[j]){
            tem=find(vec,0);
            if(tem<k){
                s3+=s1[i];
                i+=1;
                vec.push_back(0);
            }else{
                s3+=s2[j];
                j+=1;
                vec.push_back(1);
            }
        }else{
            tem=find(vec,1);
            if(tem<k){
                s3+=s2[j];
                j+=1;
                vec.push_back(1);
            }else{
                s3+=s1[i];
                i+=1;
                vec.push_back(0);
            }
        }
    }
    cout<<s3<<"\n";

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