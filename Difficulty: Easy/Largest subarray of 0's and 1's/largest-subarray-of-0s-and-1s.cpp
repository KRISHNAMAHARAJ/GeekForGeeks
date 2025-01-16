//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxLen(vector<int> &arr) {
    unordered_map<int, int> sumIndexMap; // To store the first occurrence of each sum
    int maxLength = 0;
    int cumulativeSum = 0;

    for (int i = 0; i < arr.size(); ++i) {
        // Convert 0 to -1
        cumulativeSum += (arr[i] == 0) ? -1 : 1;

        // If the cumulative sum is 0, the subarray from 0 to i has equal 0s and 1s
        if (cumulativeSum == 0) {
            maxLength = i + 1;
        }

        // If the cumulative sum is seen before, calculate the length of the subarray
        if (sumIndexMap.find(cumulativeSum) != sumIndexMap.end()) {
            maxLength = max(maxLength, i - sumIndexMap[cumulativeSum]);
        } else {
            // Store the first occurrence of this cumulative sum
            sumIndexMap[cumulativeSum] = i;
        }
    }

    return maxLength;
}
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after reading T

    while (T--) {
        string line;
        getline(cin, line); // Read the whole line for the array

        // Convert the line into an array of integers
        stringstream ss(line);
        vector<int> a;
        int num;
        while (ss >> num) {
            a.push_back(num);
        }

        // Create the solution object
        Solution obj;

        // Call the maxLen function and print the result
        cout << obj.maxLen(a) << endl;
    }

    return 0;
}
// } Driver Code Ends