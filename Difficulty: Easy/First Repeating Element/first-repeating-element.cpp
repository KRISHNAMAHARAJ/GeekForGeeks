//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr) {
        // code here
        unordered_map<int, int> freq;  
        int n = arr.size();
    
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
    
        for (int i = 0; i < n; i++) {
            if (freq[arr[i]] > 1) {
                return i + 1;  // Return 1-based index
            }
        }
        return -1;  // No repeating element found
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.firstRepeated(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends