//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    int fact(int n){
        if(n==1 || n==0){
            return 1;
        }
        return n* fact(n-1);
    }
    int isStrong(int N) {
        // code here
        int temp = N;
        int sum=0;
        string s = to_string(temp);
        for(int i=0;i<s.length(); i++){
            int digit = (s[i]-48);
            sum = sum + fact(digit);
        }
        return (sum == N);
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
        cout << ob.isStrong(N) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends