//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        sort(arr.begin(), arr.end());
        
        int count=1;
        int maxCount=1;
        for(int i = 1; i<arr.size(); i++){
            if (arr[i] == arr[i - 1]) {
                continue;                   // Ignore duplicates
            }
            if((arr[i] - arr[i-1]) == 1){
                count++;
                maxCount = max(maxCount, count);
            }
            else {
                count = 1;
            }
        }
        return maxCount;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends