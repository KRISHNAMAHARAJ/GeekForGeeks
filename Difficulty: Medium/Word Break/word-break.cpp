//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    bool wordBreak(string &s, vector<string> &dictionary) {
        unordered_set<string> dict(dictionary.begin(), dictionary.end());  // Store words in a set
        int n = s.size();
        vector<bool> dp(n + 1, false);
        dp[0] = true;  // Empty string is breakable

        // Iterate through the string
        for (int i = 1; i <= n; i++) {
            for (const string &word : dictionary) {  // Check all words in dictionary
                int len = word.size();
                if (i >= len && dp[i - len] && s.substr(i - len, len) == word) {
                    dp[i] = true;
                    break;  // No need to check further if we already found a valid break
                }
            }
        }

        return dp[n];
    }
};



//{ Driver Code Starts.

vector<string> inputLine() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<string> res;
    while (ss >> str) {
        res.push_back(str);
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        cin >> s;
        cin.ignore();
        vector<string> dictionary = inputLine();

        Solution ob;
        if (ob.wordBreak(s, dictionary)) {
            cout << "true\n";
        } else
            cout << "false\n";
        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends