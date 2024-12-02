//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string isSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    // Helper function to calculate squared distance
    auto squaredDistance = [](int x1, int y1, int x2, int y2) {
        return (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    };

    vector<int> distances = {
        squaredDistance(x1, y1, x2, y2),
        squaredDistance(x1, y1, x3, y3),
        squaredDistance(x1, y1, x4, y4),
        squaredDistance(x2, y2, x3, y3),
        squaredDistance(x2, y2, x4, y4),
        squaredDistance(x3, y3, x4, y4)
    };

    sort(distances.begin(), distances.end());

    if (distances[0] > 0 &&                     
        distances[0] == distances[1] &&
        distances[1] == distances[2] &&
        distances[2] == distances[3] &&
        distances[4] == distances[5] &&
        distances[4] > distances[0]) {
        return "Yes";
    }

    return "No";
}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

        Solution ob;
        cout << ob.isSquare(x1,y1,x2,y2,x3,y3,x4,y4) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends