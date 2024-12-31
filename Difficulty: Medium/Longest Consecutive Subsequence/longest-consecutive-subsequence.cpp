//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        if (arr.empty()) return 0;
        
        sort(arr.begin(), arr.end());
        
        int count=1;
        int maxCount=1;
        for(int i = 1; i<arr.size(); i++){
            if (arr[i] == arr[i - 1]) {
                continue;                   // Ignoring duplicates
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

/////// The above code takes TC:- O(nlogn) and SC:- O(n)



////////// This Below code is in TC:- O(n) and SC:- O(n)
/*
    int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0; // Handle empty input

    unordered_set<int> numSet(nums.begin(), nums.end()); // Insert all elements into a set
    int maxLength = 0;

    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];

        // Check if the current number is the start of a sequence
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int currentStreak = 1;

            // Count consecutive elements
            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum += 1;
                currentStreak += 1;
            }

            maxLength = max(maxLength, currentStreak);
        }
    }

    return maxLength;
}

*/

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