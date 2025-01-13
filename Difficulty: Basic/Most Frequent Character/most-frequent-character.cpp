//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string& s) {
        vector<int> freq(26, 0);  
    
        for (char c : s) {
            freq[c - 'a']++;  // Map 'a' to 0, 'b' to 1, ..., 'z' to 25
        }
    
        int maxFreq = 0;
        char result = 'z';  
    
        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                result = 'a' + i;  // Convert index back to character
            } 
            else if (freq[i] == maxFreq) {
                char currentChar = 'a' + i;
                if (currentChar < result) {
                    result = currentChar;
                }
            }
        }
        return result;
    }

};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends