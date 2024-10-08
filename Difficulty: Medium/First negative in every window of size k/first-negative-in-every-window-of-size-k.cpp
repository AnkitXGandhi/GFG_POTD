//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    deque<long long>neg;
    vector<long long>v;
    int i=0,j=0;
    while(j<N){
        if(A[j]<0) neg.push_back(A[j]);
        if(j-i+1<K) j++;
        else if(j-i+1 == K){
            if(neg.empty()) v.push_back(0);
            else {v.push_back(neg.front());
            if(A[i]<0) neg.erase(neg.begin());}
            i++;
            j++;
        }
    }
    return v;
    int start=0,end=0;
    deque<long long> ans;
    vector<long long> res;
    while(end < N){
        if(A[end] < 0){
            ans.push_back(A[end]);
        }
        if(end-start+1 < K){
            end++;
        }
        else if(end-start+1 == K){
            if(ans.size()==0){
                res.push_back(0);
            }
            else{
                res.push_back(ans.front());
                if(A[start]<0)
                    ans.pop_front();
            }
            start++;
            end++;
        }
    }
    return res;
 }