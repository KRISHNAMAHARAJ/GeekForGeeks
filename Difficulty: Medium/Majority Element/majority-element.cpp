//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {

        // your code here
        int n=arr.size();
        map<int, int> mp;
        
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto it: mp){
            if(it.second > (n/2)){
                return it.first;
            }
        }
        return -1;
    }
};

//////// above code taking O(n.logn) time and O(n) space


//////// By Using Boyer-Moore Voting Algorithm we can do in O(n) tc and O(1) sc.
/*

    int majorityElement(vector<int>& arr) {
    int candidate = -1, count = 0;

    // Step 1: Finding the candidate
    for(int num : arr) {
        if(count == 0) {
            candidate = num;
        }
        if(num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Validate the candidate (only required if the problem doesn't guarantee a majority element)
    count = 0;
    for(int num : arr) {
        if(num == candidate) {
            count++;
        }
    }

    if(count > arr.size() / 2) {
        return candidate;
    }
    
    return -1; // No majority element found
}


*/

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
    }

    return 0;
}

// } Driver Code Ends