//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    const int MOD = 1000000007;
    int lcmOfArray(int N , int A[]) {
        // code here
        long long ans=A[0];
        for(int i=1; i<N; i++){
            ans = ((ans * A[i])/(__gcd((long long)A[i], ans))) % MOD;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout<<ob.lcmOfArray(N,A)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends