//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    void reverse(vector<int>& arr, int start, int end) {
        
        while(start <= end) {
            
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
        
    }
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        
        if (n == 0)
            return;
        d = d % n;
        
        reverse(arr, 0, d-1);
        
        reverse(arr, d, n-1);
        
        reverse(arr, 0, n-1);
        
    }
    
   /*
    void rotateArr(vector<int>& arr, int d) 
    {
        int n=arr.size();
        
        if (n == 0)
            return;
        d = d % n;
        
        if (d > n)
            return;
            
        int temp[d];
        for (int i = n - d; i < n; i++)
        {
            temp[i - n + d] = arr[i];
        }
        for (int i = n - d - 1; i >= 0; i--)
        {
            arr[i + d] = arr[i];
        }
        for (int i = 0; i < d; i++)
        {
            arr[i] = temp[i];
        }
    }
    */
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        // calling rotateArr() function
        ob.rotateArr(arr, d);

        // printing the elements of the array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends