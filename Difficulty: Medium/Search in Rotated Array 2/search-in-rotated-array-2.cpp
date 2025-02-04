//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool Search(vector<int>& arr, int k) {
        // Code here
        int n= arr.size();
        int left =0, right = n-1;
        
        while(left <= right){
            int mid = left + (right - left)/2;
            if(arr[mid] == k) return true;
            
            if(arr[left] == arr[mid] && arr[mid] == arr[right]){
                left++;
                right--;
                continue;
            }
            
            if(arr[left] <= arr[mid]){
                if(arr[left] <= k  && k < arr[mid]){
                    right = mid - 1;
                }
                else {
                    left = mid +1;
                }
            }
            else {
                if(arr[mid] < k  && k <= arr[right]){
                    left = mid +1;
                }
                else {
                    right = mid -1;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        bool res = obj.Search(arr, k);
        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends