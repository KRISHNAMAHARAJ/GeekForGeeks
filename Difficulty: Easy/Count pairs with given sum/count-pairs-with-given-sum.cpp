//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        
        int count = 0;
        unordered_map<int, int> mpp; 
    
        for (int i = 0; i < arr.size(); i++) {
            int compliment = target - arr[i];
        
            if (mpp.count(compliment)) {
                count += mpp[compliment]; 
            }
            mpp[arr[i]]++;
        }
        return count;
    }
};



//////// one test case not passed TLE is coming

/*
    int countPairs(vector<int> &arr, int target) {
        // Code here
        
        int count=0;
        for(int i=0; i<arr.size(); i++){
            for(int j=i+1; j<arr.size(); j++){
                if(arr[i] + arr[j] == target){
                    count++;
                }
            }
        }
        return count;
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
        int target;
        cin >> target;
        cin.ignore();
        Solution ob;
        int res = ob.countPairs(arr, target);

        cout << res << endl << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends