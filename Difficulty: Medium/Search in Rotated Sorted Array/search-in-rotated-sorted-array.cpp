//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int key) {
        
    int left = 0, right = arr.size() - 1;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        
        // If the key is found, return its index
        if (arr[mid] == key) {
            return mid;
        }
        
        // Check if the left part is sorted
        if (arr[left] <= arr[mid]) {
            // If key lies within the range [arr[left], arr[mid]], search in left half
            if (arr[left] <= key && key < arr[mid]) {
                right = mid - 1;
            } 
            // Else search in the right half
            else {
                left = mid + 1;
            }
        } 
        // Otherwise, the right part must be sorted
        else {
            // If key lies within the range [arr[mid], arr[right]], search in right half
            if (arr[mid] < key && key <= arr[right]) {
                left = mid + 1;
            } 
            // Else search in the left half
            else {
                right = mid - 1;
            }
        }
    }
    
    // If the key is not found, return -1
    return -1;
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends