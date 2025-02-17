//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> singleNumber(vector<int>& arr) {
        
    int xor_all = 0;
    
    // Step 1: XOR all elements
    for (int num : arr) {
        xor_all ^= num;
    }

    // Step 2: Find rightmost set bit in xor_all
    int diff_bit = xor_all & -xor_all;  // Isolates the rightmost set bit

    int num1 = 0, num2 = 0;

    // Step 3: Divide numbers into two groups
    for (int num : arr) {
        if (num & diff_bit) {
            num1 ^= num;  // XOR of first group
        } else {
            num2 ^= num;  // XOR of second group
        }
    }

    // Step 4: Return sorted result
    return {min(num1, num2), max(num1, num2)};
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

        Solution ob;
        vector<int> ans = ob.singleNumber(arr);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends