//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        
        unordered_map<int, int> mpp;
        for(int i =0; i<arr.size(); i++){
            int compliment = target - arr[i];
            if(mpp.count(compliment)){
                return true;
            }
            mpp[arr[i]] = i;
        }
        return false;
    }
};


/////// Using Naive approach TC:- O(n^2) SC:- O(1)
/*
    bool twoSum(vector<int>& arr, int target) {
        // code here
        
        for(int i=0; i<arr.size()-1; i++){
            for(int j=i+1; j<arr.size(); j++){
                if((arr[i] + arr[j]) == target){
                    return true;
                }
            }
        }
        return false;
    }
*/



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int x;
        cin >> x;
        cin.ignore();

        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.twoSum(arr, x);
        cout << (ans ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends