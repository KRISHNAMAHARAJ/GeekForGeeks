//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
public:
    int countWays(string &s) {
        int n = s.length();
        vector<vector<int>> dpTrue(n, vector<int>(n, 0));
        vector<vector<int>> dpFalse(n, vector<int>(n, 0));

        // Base case: Single-character evaluations
        for (int i = 0; i < n; i++) {
            if (s[i] == 'T') dpTrue[i][i] = 1;
            else if (s[i] == 'F') dpFalse[i][i] = 1;
        }

        // Length-wise DP evaluation
        for (int len = 3; len <= n; len += 2) { // Step of 2, considering operators
            for (int i = 0; i <= n - len; i++) {
                int j = i + len - 1;
                for (int k = i + 1; k < j; k += 2) { // Operator position
                    int lt = dpTrue[i][k - 1];
                    int lf = dpFalse[i][k - 1];
                    int rt = dpTrue[k + 1][j];
                    int rf = dpFalse[k + 1][j];

                    if (s[k] == '&') {
                        dpTrue[i][j] += lt * rt;
                        dpFalse[i][j] += lt * rf + lf * rt + lf * rf;
                    } 
                    else if (s[k] == '|') {
                        dpTrue[i][j] += lt * rt + lt * rf + lf * rt;
                        dpFalse[i][j] += lf * rf;
                    } 
                    else if (s[k] == '^') {
                        dpTrue[i][j] += lt * rf + lf * rt;
                        dpFalse[i][j] += lt * rt + lf * rf;
                    }
                }
            }
        }
        return dpTrue[0][n - 1];
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        int ans = ob.countWays(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends