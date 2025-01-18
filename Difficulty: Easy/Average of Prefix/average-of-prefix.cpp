//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        
        int n = arr.size();
        int prefixSum = 0;  

        for (int i = 0; i < n; i++) {
            prefixSum += arr[i];               
            arr[i] = prefixSum / (i + 1);      
        }

        return arr;  
    }
};



///////// Using PrefixSum Concept
/*
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        vector<int> result(n,0);
        
        int prefixSum =0;
        for(int i=0; i<n; i++){
            result[i] = prefixSum;
            prefixSum += arr[i]; 
        }
        
        for(int i=n-1; i>=0; i--){
            result[i] += arr[i];
            result[i] /= i+1; 
        }
        return result;
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
        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.prefixAvg(arr);

        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends