//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        int low = 1;
           int high = n;
           int ans = 1;
           while (low <= high){
               long long mid = (low +high)/2;
               if ((mid*mid)<=n) {
                  ans  = mid;
                  low = mid +1;
                  
               }
               else {
                   high = mid -1;
               }
           }
           return high ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends