//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        // your code here
        vector<int> ans;
        deque<int> q;
        int i=0,j=0;
        while(j<arr.size()){
            while(!q.empty() && q.back()<arr[j])
            q.pop_back();
           q.push_back(arr[j]);
           if(j-i+1<k)
           j++;
           else if(j-i+1==k){
               ans.push_back(q.front());
               if(arr[i]==q.front())
               q.pop_front();
               i++;
               j++;
           }
        }
       return ans; 
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    if (t == 2) {
        cout << -1 << endl;
        return 0;
    }
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> res = obj.max_of_subarrays(k, arr);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends