//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
    int onlyFirstAndLastAreSet(long long int n) { 
    // Check if the last bit is set
    if ((n & 1) == 0) return 0;
    
    // Find the position of the most significant bit (MSB)
    int msb_pos = 0;
    long long int temp = n;
    
    while (temp > 1) {
        temp >>= 1;
        msb_pos++;
    }
    
    // Create a number with only first and last bits set
    long long int required_number = (1LL << msb_pos) | 1;
    
    // Check if n is exactly the required number
    return (n == required_number) ? 1 : 0;
	}
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        Solution ob;
        cout << ob.onlyFirstAndLastAreSet(n) << endl;
    
cout << "~" << "\n";
}
    
return 0;
}


// } Driver Code Ends