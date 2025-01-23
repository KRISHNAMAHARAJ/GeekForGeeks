//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the difference between the maximum and minimum frequency of
    // elements.
    int findDiff(vector<int>& arr) {
        // code here
        unordered_map<int, int> mpp;
        
        for(int num : arr){
            mpp[num]++;
        }
        
        int max_freq = INT_MIN, min_freq = INT_MAX;
        
        for (unordered_map<int, int>::iterator it = mpp.begin(); it != mpp.end(); ++it) {
            max_freq = max(max_freq, it->second);
            min_freq = min(min_freq, it->second);
        }
        
        if (max_freq == min_freq) {
            return 0;
        }

        return max_freq - min_freq;
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findDiff(nums) << endl;
    }
    return 0;
}

// } Driver Code Ends