//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countSquares(int n) {
    // Find the largest integer k such that k^2 < n
    int k = sqrt(n - 1);
    return k;
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin >> N;

        Solution ob;
        cout << ob.countSquares(N) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends