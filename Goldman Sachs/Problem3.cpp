
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long int k) {
        
        if(k==1)
        {
            return 0;
        }
        long long int prod=1;
        long long int left, right, x, count=0;
        left=right=0;
        while(right<n)
        {
            prod = prod*a[right];
            if(prod<k)
            {
                right++;
            }
            else
            {
                x=right-left;
                count = count + (x*(x+1))/2;
                while(prod>=k && left<n)
                {
                    prod=prod/a[left];
                    left++;
                }
                x=right-left;
                count = count - (x*(x+1))/2;
                right++;
            }
            
        }
        x=right-left;
        count = count + (x*(x+1))/2;
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
