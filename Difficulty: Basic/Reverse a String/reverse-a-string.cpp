//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string s) {
        // code here
        // int n = s.length();
        // int i=0,j=n-1;
        
        // while(i<=j){
        //     swap(s[i++], s[j--]);
        // }
        
        reverse(s.begin(), s.end());
        return s;
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
        cout << ob.revStr(s) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends