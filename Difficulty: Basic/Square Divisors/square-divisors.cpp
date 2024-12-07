//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int squareFactor(long long N){
        // code here
        int count=0;
        for(int i=1; i*i<=N; i++){
            if(N % (i*i) == 0){
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        
        Solution ob;
        cout<<ob.squareFactor(N)<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends