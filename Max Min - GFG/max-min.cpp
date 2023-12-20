//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int min1=INT_MAX;
    	int max1=INT_MIN;
    	
    	for(int i=0;i<N;i++){
    	    if(A[i]<min1) min1=A[i];
    	}
    	
    		for(int i=0;i<N;i++){
    	    if(A[i]>max1) max1=A[i];
    	}
    	return (max1+min1);
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends