//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[], int N) {
        
        int result = 0;

        // Iterate over each bit position (0-31 for int)
        for (int i = 0; i < 32; i++) {
            int bitSum = 0;

            // Count how many times this bit appears in the array
            for (int j = 0; j < N; j++) {
                if (arr[j] & (1 << i)) {
                    bitSum++;
                }
            }

            // If bitSum is NOT a multiple of 3, that bit belongs to the unique element
            if (bitSum % 3 != 0) {
                result |= (1 << i);
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
        int N;
        
        cin>>N;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.singleElement(arr,N);
        cout<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends