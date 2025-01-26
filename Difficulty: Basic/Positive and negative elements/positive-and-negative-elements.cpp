//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> arranged(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        vector<int> pos;
        vector<int> neg;
        vector<int> result(n, 0);
        
        for(int i=0; i<n; i++){
            if(arr[i] < 0){
                neg.push_back(arr[i]);
            }
            else {
                pos.push_back(arr[i]);
            }
        }
        
        int i=0, j=0, k=0;
        while(i<n/2 && j<n/2){
            result[k++] = pos[i++];
            result[k++] = neg[j++];
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.arranged(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends