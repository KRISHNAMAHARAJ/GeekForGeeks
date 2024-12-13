//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int n= arr.size();
        int left =0, right = n-1;
        
        while(left < right){
            int mid= (left + right)/2;
            if(arr[mid] > arr[right]){
                left = mid+1;
            }
            else if(arr[mid] < arr[right]){
                right = mid;
            }
            else {
                right--;
            }
        }
        return arr[left];
    }
};


/////// IN O(n) tc ///////
/*
    int mini = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        mini = min(mini, arr[i]);
    }
    return mini;
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