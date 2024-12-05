//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isDisarium(int N) {
        // code here
       int count =0;
       int temp = N;
       while(temp>0){
           count++;
           temp = temp/10;
       }
       temp = N;
       int sum=0;
       for(int i=count; i>0; i--){
           int digit = temp %10;
           sum = sum + pow(digit, i);
           temp /=10;
       }
       return (sum == N);
    }   
};




/////we prefer this string method //////
////////Using string method ////
/*

 string s = to_string(N);
        int sum=0;
        for(int i=0; i<s.length(); i++){
            int digit = (s[i]-48);
            sum = sum + pow(digit, i+1);
        }
        if(sum == N) return 1;
        else return 0;
*/

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