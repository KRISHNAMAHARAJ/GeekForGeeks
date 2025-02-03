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
        
        while(left <= right){
            int mid = left + (right - left)/2;
            
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