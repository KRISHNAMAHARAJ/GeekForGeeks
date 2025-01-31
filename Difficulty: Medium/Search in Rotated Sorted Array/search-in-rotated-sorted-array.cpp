//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int search(vector<int>& arr, int key) {
     
        int n = arr.size();
        
        int left =0, right = n-1;
        
        while(left <= right){
            int mid = left + (right - left)/2;
            
            if(arr[mid] == key) return mid;
            
            if(arr[left] <= arr[mid]){          // Left sorted
                if(arr[left] <= key && key <= arr[mid]){
                    right = mid -1;
                }
                else {
                    left = mid +1;
                }
            }
            else {                              // Right Sorted
                if(arr[mid] <= key && key <= arr[right]){
                    left = mid +1;
                }
                else {
                    right = mid -1;
                }
            }
        }
        return -1;
    }
};



////// Using Linear Search TC:- O(n) 
/*
    int search(vector<int>& arr, int key) {
     
        int n = arr.size();
        for(int i=0; i<n; i++){
            if(arr[i] == key){
                return i;
            }
        }
        return -1;
        
    }
*/

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