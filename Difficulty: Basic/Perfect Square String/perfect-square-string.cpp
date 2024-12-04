//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int isSquare(string S);

int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        cout << isSquare(S) << endl;
    
cout << "~" << "\n";
}
return 0;
}
// } Driver Code Ends


int isSquare(string S){
    //complete the function here
    int sum = 0;
    for(int i =0; i<S.length(); i++){
        sum += S[i];
    }
    int sqrtNum = sqrt(sum);   // Compute the integer square root
    return (sqrtNum * sqrtNum == sum);
}