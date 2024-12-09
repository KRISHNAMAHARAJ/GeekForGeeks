//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str) {
    int sum = 0;
    string temp = "";

    for (char ch : str) {
        if (isdigit(ch)) { 
            // If the character is a digit, add it to the temporary string
            temp += ch;
        } else {
            // If the character is not a digit, convert temp to an integer and add to sum
            if (!temp.empty()) {
                sum += stoi(temp); 
                temp = ""; // Reset temp to start collecting the next number
            }
        }
    }
    // Add any remaining number that was collected
    if (!temp.empty()) {
        sum += stoi(temp);
    }

    return sum;
}

};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	
cout << "~" << "\n";
}
	return 0;
}

// } Driver Code Ends