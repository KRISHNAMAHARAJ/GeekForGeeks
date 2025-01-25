//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        
        int n = arr.size();
        
        for(int i=0; i<n; i++){
            if(arr[i] <= 0 || arr[i] > n){
                arr[i] = n+1;
            }
        }
        
        for(int i=0; i<n; i++){
            int element = abs(arr[i]);
            if(element > n){
                continue;
            }
            int seat = element -1;
            if(arr[seat] > 0){
                arr[seat] = -arr[seat];
            }
        }
        
        for(int i=0; i<n; i++){
            if(arr[i] > 0){
                return i+1;
            }
        }
        return n+1;

    }
};

//Above method is optimal and best

// test case:- [2,3,0,11,1,-7,3]  - this test case is good for making any logic


///////3rd Method:-  Using Hash Set TC:- O(n) and SC:- O(n) here extra space is used.
/*
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int> st;

        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        for(int i = 1; i<=n+1; i++){
            if(st.find(i) == st.end()){
                return i;
            }
        }
        return n+1;    
    }
*/



///////2nd Method:- Using Sorting  TC:- O(nlogn) and SC:- O(1) 
/*
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
           
        sort(nums.begin(), nums.end());
        int cand = 1;
        for(int i=0; i< n; i++){
            if(nums[i] > cand){
                return cand;
            }
            else if(nums[i] == cand){
                cand++;
            }
        }
        return cand;
    }
*/

//{ Driver Code Starts.

// int missingNumber(int arr[], int n);

int main() {

    // taking testcases
    int t;
    cin >> t;
    cin.ignore();
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
        int result = ob.missingNumber(arr);
        cout << result << "\n";
    }
    return 0;
}
// } Driver Code Ends