//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int theLastDigit(int a, int b, int c, int d, int e, int f){
        // code here 
        a = a %10;
        c = c %10;
        e = e %10;
        
        b = b%4 + 4;
        d = d%4 + 4;
        f = f%4 + 4;
        
        
        int x = (((int)(pow(a, b))) % 10);
        int y = (((int)(pow(c, d))) % 10);
        int z = (((int)(pow(e, f))) % 10);
        
        int result = (x*y*z)%10;
        
        return result;
    }
};



/*
    int theLastDigit(int a, int b, int c, int d, int e, int f){
        // code here 
        
        // 2,3,7,8  - 4
        //4,9       - 2
        // 1,5,6   - 1
        // 0       - 0
        
        
        int a_first = a % 10;
        int c_first = c % 10;
        int e_first = e % 10;
        
        if(a_first == 0 || c_first == 0 || e_first == 0){
            return 0;
        }
        
        if(a_first == 2 || a_first == 3 || a_first == 7 || a_first == 8) {
            b = b % 4;
        }
        if(c_first == 2 || c_first == 3 || c_first == 7 || c_first == 8) {
            d = d % 4;
        }
        if(e_first == 2 || e_first == 3 || e_first == 7 || e_first == 8) {
            f = f % 4;
        }
        
        if(a_first == 4 || a_first == 9) {
            b = b % 2;
        }
        if(c_first == 4 || c_first == 9){
            d = d % 2;
        }
        if(e_first == 4 || e_first == 9) {
            f = f % 2;
        }
        
        if(a_first == 1 || a_first == 5 || a_first == 6) {
            b = 1;
        }
        
        if(c_first == 1 || c_first == 5 || c_first == 6) {
            d = 1;
        }
        if(e_first == 1 || e_first == 5 || e_first == 6) {
            f = 1;
        }
        
        int x = pow(a_first, b);
        int y = pow(c_first, d);
        int z = pow(e_first, f);
        
        int result = x*y*z;
        
        return (result % 10);
    }
*/

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e,f;
        cin >> a>>b>>c>>d>>e>>f;
        Solution ob;
        cout << ob.theLastDigit(a,b,c,d,e,f) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 
// } Driver Code Ends