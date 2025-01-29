//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    double power(double b, int e) {
    double result = 1.0;
    long long exp = e;  // Convert to long long to handle INT_MIN case

    if (exp < 0) {
        b = 1.0 / b;
        exp = -exp;
    }

    while (exp > 0) {
        if (exp % 2 == 1) result *= b;  // If bit is set, multiply
        b *= b;  // Square the base
        exp /= 2;  // Reduce exponent
    }

    return result;
}


};

//{ Driver Code Starts.

int main() {
    cout << fixed << setprecision(5);
    int t;
    cin >> t;
    while (t--) {
        double b;
        cin >> b;
        int e;
        cin >> e;
        Solution ob;
        cout << ob.power(b, e) << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends