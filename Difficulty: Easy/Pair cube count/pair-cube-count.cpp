//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int pairCubeCount(int N) {
        // code here
        int count=0;
        for(int a=1; a*a*a<=N; a++){
            int acube = a*a*a;
            int bcube = N - acube;
            
            if (bcube >= 0) {
                int b = cbrt(bcube);
                if (b * b * b == bcube) {
                count++;
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.pairCubeCount(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends