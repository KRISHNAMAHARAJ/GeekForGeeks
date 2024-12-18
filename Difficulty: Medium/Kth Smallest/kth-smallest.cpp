//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        
        /// Using Counting Sort TC:- O(n + max_element) SC:- O(max_element)

        int maxElement = *max_element(arr.begin(), arr.end());
        vector<int> count(maxElement + 1, 0);
    
        for (int i = 0; i < arr.size(); i++) {
            count[arr[i]]++;
        }
    
        int cumulativeCount = 0;
        for (int i = 1; i <= maxElement; i++) {
            cumulativeCount += count[i];
            if (cumulativeCount >= k) {
                return i;
            }
        }
        return -1;
    }

};



//////Using sort function TC:- O(nlogn) and SC:- O(1)
/*
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        return arr[k-1];
    }
*/

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        k = crr[0];
        int n = arr.size();
        Solution ob;
        cout << ob.kthSmallest(arr, k) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends