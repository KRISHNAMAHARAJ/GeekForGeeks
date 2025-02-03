//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        
        int left = 0, right = arr.size() -1;
        int min=0;
        
        while(left < right){
            int mid = left + (right - left)/2;
            
            if(arr[mid] > arr[right]){ // right side
                left = mid+1; // move right
            }
            else {
                right = mid;
            }
        }
        return arr[right];
    }
};


///// Using Linear Search TC:- O(n)
/*
    int findMin(vector<int>& arr) {
        // complete the function here
        int mini = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            mini = min(mini, arr[i]);
        }
        return mini;
    }
*/

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends