//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int rows = mat.size();
        int cols = mat[0].size();
    
    /////////// USing Staircase Search approach  TC:- O(n+m)
    
        // Start from the top-right corner
        int i = 0, j = cols - 1;
    
        while (i < rows && j >= 0) {
            if (mat[i][j] == x) {
                return true; // Found the element
            } else if (mat[i][j] > x) {
                j--; // Move left
            } else {
                i++; // Move down
            }
        }
    
        return false; // Element not found
    }
};


//////// Using simple naive approach TC:- O(n*m)

/*
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        
        int rows = mat.size();          //// TC:- O(n*m) 
        int cols = mat[0].size();
        
        for(int i =0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(mat[i][j] == x){
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

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));
        int x;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }
        cin >> x;
        Solution ob;
        bool an = ob.matSearch(matrix, x);
        if (an)
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends