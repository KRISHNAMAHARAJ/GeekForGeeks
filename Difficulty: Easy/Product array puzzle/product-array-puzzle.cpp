//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& nums) {
                                            
        int countZero = 0;       ///// Using Brute Force but more efficient
        int product = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                countZero++;
            }else{
                product *= nums[i];
            }
        }

        for(int i=0;i<nums.size();i++){
            if(countZero>1){
                nums[i]=0;
            }else if((countZero==1) && nums[i]!=0){
                nums[i]=0;
            }else if ((countZero==1) && nums[i]==0){
                
                nums[i] = product;
            }else{
                int temp = product / nums[i];
                nums[i] = temp;
            }
        }
        return nums;
    }
};



/////// Using PrefixSum/Product concept 

/*
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n= arr.size();
        vector<int> result(n,1);
        
        // Step 1: Calculate prefix products
        int prefixProduct = 1;
        for (int i = 0; i < n; i++) {
            result[i] = prefixProduct;
            prefixProduct *= arr[i];
        }

        // Step 2: Calculate suffix products and combine with prefix
        int suffixProduct = 1;
        for (int i = n - 1; i >= 0; i--) {
            result[i] *= suffixProduct;
            suffixProduct *= arr[i];
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
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends