//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    int gcd(int N, int arr[])
    {
    	// Your code goes here
    	int ans=arr[0];
    	for(int i=1; i<N; i++){
    	    ans = __gcd(arr[i],ans);
    	}
    	return ans;
    }
};


//{ Driver Code Starts.

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        int arr[N];
        for(int i = 0; i < N; i++)
        	cin >> arr[i];
        Solution ob;
       	cout <<  ob.gcd(N, arr) << "\n";
   
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends