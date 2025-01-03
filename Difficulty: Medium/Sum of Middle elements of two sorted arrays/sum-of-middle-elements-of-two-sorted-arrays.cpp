//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        
        int n1 = arr1.size();
        int n2 = arr2.size();
        
        vector<int> result;
        int sum=0;
        
        int i=0, j=0;
        
        while(i<n1 && j<n2){
            
            if(arr1[i] <= arr2[j]){
                result.push_back(arr1[i++]);
            }
            else {
                result.push_back(arr2[j++]);
            }
        }
        
        while(i<n1){
            result.push_back(arr1[i++]);
        }
        while(j<n2){
            result.push_back(arr2[j++]);
        }
        
        
        if(result.size() % 2 == 0){
            sum = result[((n1+n2)/2) - 1] + result[(n1+n2)/2];
        }
        else {
            sum = result[(n1+n2)/2];
        }
        return sum;
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl << "~\n";
    }
}
// } Driver Code Ends