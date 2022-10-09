#include<bits/stdc++.h>

using namespace std;
#define ll long long

void TestCase() {
    int n=7,tem;
    vector<int>vec={0,1,2,3,4,5,6},arr;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            tem=vec[i]&vec[j];
            arr.push_back(tem);
        }
    }
//    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    TestCase();
    return 0;
}