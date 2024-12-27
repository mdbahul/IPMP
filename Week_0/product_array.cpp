//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Complete back-end function template for C++


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long> productExceptSelf(vector<int>& arr) {
        int c = 0;
        long long product = 1;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            if(arr[i] == 0)
                c++;
            else 
                product *= arr[i];
        }
        vector<long long> ans(n);
        if(c>1) return ans;
        for(int i = 0; i<n; i++){
            if(c == 1){
                if(arr[i] == 0)
                    ans[i] = product;
                else
                    ans[i] == 0;
            }
            else ans[i] = product / arr[i];
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // To ignore newline character after t input

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        vector<long long> vec = obj.productExceptSelf(arr); // Function call

        for (int i = 0; i < vec.size(); i++) { // Print the output
            cout << vec[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends