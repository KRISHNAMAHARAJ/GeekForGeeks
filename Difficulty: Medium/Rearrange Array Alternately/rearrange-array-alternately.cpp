//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    void rearrange(vector<int>& arr) {
        int n = arr.size();
        
        // Sort the array
        sort(arr.begin(), arr.end());
        
        // Initialize two pointers: left (for minimum element) and right (for maximum element)
        int left = 0, right = n - 1;
        
        // Create a new array to store the result
        vector<int> result;
        
        // While left pointer is less than or equal to right pointer
        while (left <= right) {
            // Add the max element
            if (left != right) {
                result.push_back(arr[right]);
            }
            // Add the min element
            result.push_back(arr[left]);
            
            // Move the pointers towards each other
            right--;
            left++;
        }
        
        // Copy the result back to the original array
        arr = result;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        obj.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends