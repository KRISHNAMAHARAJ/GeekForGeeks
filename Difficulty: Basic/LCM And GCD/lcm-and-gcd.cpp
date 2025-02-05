//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int gcd = __gcd(a,b);
        int lcm = (a*b)/gcd;
        return {lcm, gcd};
    }    
};




/////////////METHOD 1 /////////////////
/*
// Recursive function to return gcd of a and b 
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Function to return LCM of two numbers 
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
*/










/////////USING IN-BUILT FUNCTIONS //////////it uses internally euclidean algo.

//       cout << "The gcd of a and b is " << __gcd(a, b) << endl;

/////////1. EUCLIDEAN APPROACH (Optimal) /////////
/*                                                
    int findgcd(int a, int b){            //// We can also write this in recursive way.
        while(a>0 && b>0){
            if(a>b){
                a = a%b;
            }
            else{
                b = b%a;
            }
        }
        if(a=0) return b;
            
        return a;
    }
*/

////////////////// NAIVE APPROACH //////////////

/////////////// 2. The GCD of two numbers is the largest number that divides both of them without leaving a remainder. 
//through all numbers from 1 up to the minimum of the two input numbers, checking if each number is a common factor of both input numbers.
/*
    int findgcd(n1, n2) {
            
        int gcd=1;
        for(int i=1; i<=min(n1,n2); i++){
            if(n1%i==0 && n2%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
*/


///////////// MOdified verison of 2nd above method ///////
/*
    int findgcd(n1,n2){
        
        for(int i= min(n1,n2); i>0; i--){
            if(n1%i==0 && n2%i==0){
                return i;
            }
        }
        return 1;
    }
*/




////////////// Function to return LCM of two numbers////////
/*

int LCM(int a, int b)
{
    int greater = max(a, b);
    int smallest = min(a, b);
    for (int i = greater; ; i += greater) {
        if (i % smallest  == 0)
            return i;
    }
}

*/





//////////////// GCD of More than 2 Numbers ///////
/*

// Function to return gcd of a and b
int gcd(int a, int b)
{
  if (a == 0)
    return b;                 
  return gcd(b % a, a);
}

// Function to find gcd of array of
// numbers
int findGCD(int arr[], int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);     //// __gcd(a,b)  //// using In-built Functions

    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}


*/




///////////// LCM of More than 2 Numbers ///////
/*

// Utility function to find
// GCD of 'a' and 'b'
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Returns LCM of array elements
ll findlcm(int arr[], int n)
{
    // Initialize result
    ll ans = arr[0];

    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));

    return ans;
}

*/


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends
