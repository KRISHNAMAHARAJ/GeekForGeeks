//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x){
         // code here
        int n = v.size();
        
        long first=-1, last=-1;
        
        int left=0, right =n-1;
        while(left <= right){
            int mid = left + (right- left)/2;
            
            if(v[mid] == x){
                first = mid;
                right = mid - 1;
            }
            else if(v[mid] < x){
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        
        left=0, right =n-1;
        while(left <= right){
            int mid = left + (right- left)/2;
            
            if(v[mid] == x){
                last = mid;
                left = mid + 1;
            }
            else if(v[mid] < x){
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        return {first, last};
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends