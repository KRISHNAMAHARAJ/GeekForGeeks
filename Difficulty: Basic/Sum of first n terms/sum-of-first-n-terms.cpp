//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
        int result = (n * (n+1))/2;
        return result * result;
    }
};

///////USING RECURSION it takes O(n) tc and O(n) sc. 
/*
    int sumOfSeries(int n) {
        // code here
        if(n==1){
            return 1;
        }
        return n*n*n + sumOfSeries(n-1);
    }
*/


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends