//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        
        int n = mat.size();
        int m= mat[0].size();           ///// TC:- O(n+m) SC:- O(1)
        
        int left = 0, top = m-1;
        
        while(left<n && top>=0){
            
            if(mat[left][top] == x) return true;
            
            else if(mat[left][top] > x){
                top--;
            }
            else {
                left++;
            }
        }
        return false;
    }

};


//////// Using TC:- O(log(n*m)). SC:- O(1)

/*
    bool searchMatrix(vector<vector<int>> &mat, int x) {
    int n = mat.size();
    int m = mat[0].size();
    int low = 0, high = n * m - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int midElement = mat[mid / m][mid % m]; // Map mid to 2D indices

        if (midElement == x) {
            return true;
        } else if (midElement < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
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
        if (obj.searchMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends