//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
    int n = arr.size();
    
    // Edge case: If the first element is 0, we can't move.
    if (n == 1) return 0; // Already at the last index
    if (arr[0] == 0) return -1; // Cannot move anywhere

    int jumps = 0;       // Number of jumps
    int current_end = 0; // Current range of this jump
    int farthest = 0;    // Farthest we can reach

    for (int i = 0; i < n - 1; i++) {
        // Update the farthest position we can reach
        farthest = max(farthest, i + arr[i]);
        
        // If we reached the end of the range of the current jump, we must make another jump
        if (i == current_end) {
            jumps++;
            current_end = farthest;
            
            // If we reached or passed the end of the array, return jumps
            if (current_end >= n - 1) {
                return jumps;
            }
        }
    }
    
    // If we never reached the last index, return -1
    return -1;
}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends