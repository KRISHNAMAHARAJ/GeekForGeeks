//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// class Solution {
//   public:
//     int kthMissing(vector<int> &arr, int k) {
//         // Your code goes here
//         const int MAX_VALUE = 1000001;
//         vector<int> hash(MAX_VALUE, 0);
        
//         for(int i=0; i<arr.size(); i++){
//             hash[arr[i]]++;
//         }
//         for(int i=1; i<MAX_VALUE; i++){
//             if(hash[i] == 0){
//                 k--;
//                 if(k==0){
//                     return i;
//                 }
//             }
//         }
//     }
// };



class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
    int n = arr.size();
    int left = 0, right = n - 1;

    // If kth missing is beyond the last element of the array
    if (k > arr[n - 1] - n) {
        return arr[n - 1] + (k - (arr[n - 1] - n));
    }

    // Binary search to find where the kth missing lies
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int missingCount = arr[mid] - (mid + 1); // Calculate the number of missing elements till arr[mid]
        
        if (missingCount < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Calculate the result using right pointer
    return arr[right] + (k - (arr[right] - (right + 1)));
}

};























//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
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
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.kthMissing(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends