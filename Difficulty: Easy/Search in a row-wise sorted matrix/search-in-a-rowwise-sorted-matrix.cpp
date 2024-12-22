//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        
        int m = mat.size();
        int n= mat[0].size();  
                                     //// TC:- O(m*logn) SC:- O(1)
        
        for(int i=0; i<m; i++){
            
            int j=0, k= n-1;
            
            while(j<=k){
                
                int mid= (j+k)/2;
                
                if(mat[i][mid] == x) return true;
                
                else if(mat[i][mid] < x){
                    j=mid+1;
                }
                else {
                    k = mid-1;
                }
            }
        }
        return false;
    }
};



//////// OPTIMIZED WAY TC:- O(log(m*n)). SC:- O(1)

/*
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
    int rows = mat.size();
    int cols = mat[0].size();

    int low = 0, high = rows * cols - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Map 1D index to 2D row and column
        int midValue = mat[mid / cols][mid % cols];

        if (midValue == x) {
            return true; // Element found
        } else if (midValue < x) {
            low = mid + 1; // Move to the right
        } else {
            high = mid - 1; // Move to the left
        }
    }

    return false; // Element not found
}


*/

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchRowMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends