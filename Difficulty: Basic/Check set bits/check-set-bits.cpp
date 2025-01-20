//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
   
class Solution{
public:
    int isBitSet(int N){
        // code here 
        if(N == 0){
            return 0;
        }
        while(N){
            int Nbit = N & 1;
            if(Nbit == 0){
                return 0;
            }
            N = N >> 1;
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isBitSet(N) << endl;
    
cout << "~" << "\n";
}
    return 0; 
}
// } Driver Code Ends