//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isDisarium(int N) {
        // code here
        string s = to_string(N);
        int sum=0;
        for(int i=0; i<s.length(); i++){
            int digit = (s[i]-48);
            sum = sum + pow(digit, i+1);
        }
        if(sum == N) return 1;
        else return 0;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isDisarium(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends