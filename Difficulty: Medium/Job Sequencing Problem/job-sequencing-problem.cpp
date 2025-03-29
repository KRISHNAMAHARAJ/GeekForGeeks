//{ Driver Code Starts
// Driver code
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class DisjointSet {
    vector<int> parent;
public:
    DisjointSet(int n) {
        parent.resize(n + 1);
        for (int i = 0; i <= n; ++i) {
            parent[i] = i;
        }
    }
    
    int find(int s) {
        if (s == parent[s])
            return s;
        return parent[s] = find(parent[s]);
    }
    
    void merge(int u, int v) {
        parent[v] = u;
    }
};

class Solution {
public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n = deadline.size();
        vector<pair<int, int>> jobs;
        for (int i = 0; i < n; ++i) {
            jobs.emplace_back(profit[i], deadline[i]);
        }
        // Sort jobs in descending order of profit
        sort(jobs.begin(), jobs.end(), greater<pair<int, int>>());
        
        int maxDeadline = *max_element(deadline.begin(), deadline.end());
        DisjointSet ds(maxDeadline);
        
        int totalJobs = 0;
        int totalProfit = 0;
        
        for (const auto &job : jobs) {
            int currProfit = job.first;
            int currDeadline = job.second;
            
            int availableSlot = ds.find(currDeadline);
            if (availableSlot > 0) {
                ds.merge(ds.find(availableSlot - 1), availableSlot);
                totalJobs++;
                totalProfit += currProfit;
            }
        }
        
        return {totalJobs, totalProfit};
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> deadlines, profits;
        string temp;
        getline(cin, temp);
        int x;
        istringstream ss1(temp);
        while (ss1 >> x)
            deadlines.push_back(x);

        getline(cin, temp);
        istringstream ss2(temp);
        while (ss2 >> x)
            profits.push_back(x);

        Solution obj;
        vector<int> ans = obj.jobSequencing(deadlines, profits);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends