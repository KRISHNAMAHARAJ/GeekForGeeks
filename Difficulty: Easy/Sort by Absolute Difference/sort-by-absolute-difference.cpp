//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sortABS(int k, vector<int> &arr) {
        // code here
        
        multimap<int,int> mpp;
        
        for(int i=0; i<arr.size(); i++){
            mpp.insert({abs(arr[i] - k), arr[i]});
        }
        int i=0;
        for(auto it = mpp.begin(); it != mpp.end(); it++){
            arr[i++] = (*it).second;
        }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        vector<int> arr;
        int k;
        cin >> k;
        string input;
        getline(cin, input);
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        ob.sortABS(k, arr);

        for (int& val : arr)
            cout << val << " ";
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}
// } Driver Code Ends