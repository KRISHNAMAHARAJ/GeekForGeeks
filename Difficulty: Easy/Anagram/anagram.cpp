//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {
        // Your code here
        int n1 = s1.length();
        int n2 = s2.length();
        
        if(n1 != n2 ) return false;
        else {
            int hash1[26]={0};
            for(int i=0; i<n1; i++){
                hash1[s1[i]-97]++;
            }
            
            int hash2[26]={0};
            for(int i=0; i<n2; i++){
                hash2[s2[i]-97]++;
            }
            
            for(int i=0; i<26; i++){
                if(hash1[i] != hash2[i])
                    return false;
            }
        }
        return true;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;
        Solution obj;
        if (obj.areAnagrams(c, d))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends