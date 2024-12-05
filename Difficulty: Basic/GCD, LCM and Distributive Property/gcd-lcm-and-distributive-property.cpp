//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long findValue(int x, int y, int z) { 
        //complete the function here
        
        long long lcm1 = (long long)(x / __gcd(x, y)) * y;
        long long lcm2 = (long long)(x / __gcd(x, z)) * z;
        return __gcd(lcm1,lcm2);
    }
};



//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        Solution ob;
        cout << ob.findValue(x, y, z) << endl;
    
    
cout << "~" << "\n";
}
    return 0; 
} 

// } Driver Code Ends