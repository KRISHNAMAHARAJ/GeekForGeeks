//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        int n=mat.size();
        int m= mat[0].size();
        
        int left=0, right=m-1, top=0, bottom = n-1;
        vector<int> result;
        
        while(left<=right && top<=bottom){
            
            // Traversing the top Row
            for(int i = left; i<=right; i++){
                result.push_back(mat[top][i]);
            }
            top++;
        
            // Traversing the Right Column
            for(int i = top; i<=bottom; i++){
                result.push_back(mat[i][right]);
            }
            right--;
        
            // Traversing the Bottom Row (if still valid)
            if(top<=bottom){
                for(int i = right; i>=left; i--){
                    result.push_back(mat[bottom][i]);
                }
                bottom--;    
            }
            
            // Traversing the left Column (if still valid)
            if(left<=right){
                for(int i = bottom; i>=top; i--){
                    result.push_back(mat[i][left]);
                }
                left++;     
            }
        }
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends