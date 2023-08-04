//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str){
    int number  = 0;
    int arr[26] = {0};
    
    for(int i=0;i<str.length();i++){
        if(str[i] >='a' && str[i]<='z'){
            number = str[i] - 'a';
        }
        else if(str[i] >='A' && str[i]<='Z'){
            number = str[i] - 'A';
        }
        arr[number]++;
    }
    int max = INT_MIN;
    int ans = 0;
    // int count= 0;
    for(int i=0; i<26; i++){
        if(arr[i] > max){
            max = arr[i];
            ans = i;
        }
    }
    char finalans = ans + 'a';
}
};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends