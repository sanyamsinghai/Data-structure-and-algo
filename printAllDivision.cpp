//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution { 
  public:
    void print_divisors(int n) { 
        // Code here.
        vector<int> v;
        int i;
        int sq=sqrt(n);
        for(i=1 ; i<=sq ; i++){
            if(n%i==0){
                // cout<<i<<" ";
                v.push_back(i); 
                
                if(n/i!=i)
                // cout<<n/i<<" ";
                v.push_back(n/i);
            }
        }
        sort(v.begin(),v.end());
        for(auto it:v){
            cout<<it<<" ";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends