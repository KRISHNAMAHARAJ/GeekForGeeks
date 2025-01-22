//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        
        int n = arr.size();
        vector<int> result(2,-1);
        int start = -1, end =-1;
        
        int left =0, right = n-1;       // Searching leftbound
        while(left <= right){
            int mid = left + (right - left)/2;
            
            if(arr[mid] == x){
                start = mid;
                right = mid-1;
            }
            else if(arr[mid] < x){
                left = mid+1;
            }
            else {
                right = mid -1;
            }
        }
        result[0] = start;
        
        
        left =0, right = n-1;       // Searching rightbound
        while(left <= right){
            int mid = left + (right - left)/2;
            
            if(arr[mid] == x){
                end = mid;
                left = mid+1;
            }
            else if(arr[mid] < x){
                left = mid+1;
            }
            else {
                right = mid -1;
            }
        }
        result[1] = end;
        
        return result;
    }
};



/////////// Using Brute Force  TC:- O(n) and  SC:- O(1)
/*
    vector<int> find(vector<int>& arr, int x) {
        // code here
        
        int n = arr.size();
        int first = -1, last =-1;
        for(int i=0; i<n; i++){
            if(arr[i] == x){
                if(first == -1)  first = i;
                last = i;
            }
        }
        return {first, last};
    }
*/


//{ Driver Code Starts.

int main() {

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
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends