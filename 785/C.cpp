// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:
    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
    {
        //code here.
        int i=0,j=0,k=0;
        int arr[n1+n2];
        while(i<n1 and j<n2){
            if(A[i]<=B[j]){
                arr[k]=A[i];
                i++;
                k++;
            }
            else{
                arr[k]=B[j];
                j++;
                k++;
            }
        }
        if(i==n1){
            for(int x=j;x<n2;x++){
                arr[k]=B[j];
            }
        }
        if(j==n2){
            for(int x=i;x<n1;x++){
                arr[k]=A[i];
            }
        }
        //=======================================
        i=0;
        j=0;
        int arr1[n1+n2+n3];

        while(i<(n1+n2) and j<n3){
            if(arr[i]<=C[j]){
                arr1[k]=arr[i];
                i++;
                k++;
            }
            else{
                arr1[k]=C[j];
                j++;
                k++;
            }
        }
        if(i==n1+n2){
            for(int x=j;x<n3;x++){
                arr1[k]=C[j];
            }
        }
        if(j==n3){
            for(int x=i;x<n1+n2;x++){
                arr1[k]=arr[i];
            }
        }
        //===========================================
        i=1;
        j=0;
        vector<int>vec;
        while(i<n1+n2+n3){
            if(arr1[i]==arr1[i-1]){
                if(vec[j]!=arr1[i]){
                    vec.emplace_back(arr1[i]);
                    j++;
                }
            }
            i++;
        }
        if(vec.empty()){
            vec.emplace_back(-1);
            return vec;
        }
        return vec;

    }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];

        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];

        Solution ob;

        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0)
            cout << -1;
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}  // } Driver Code Ends