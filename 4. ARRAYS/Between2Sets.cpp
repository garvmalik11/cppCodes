// There will be two arrays of integers. 
// Determine all integers that 
// satisfy the following two conditions:

// The elements of the first array are all factors of 
// the integer being considered
// The integer being considered is a factor of all 
// elements of the second array
// These numbers are referred to as being between 
// the two arrays. Determine how many such numbers exist.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    int number=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int flag=0;
    int x=a[n-1];
    int c[100];
    int j=0;
    while(x<=b[0]){
        for(int i=0;i<n;i++){
            if(x%a[i]==0){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            c[j]=x;
            j++;
        }
        x++;
    }
    
    for(int i=0;i<j;i++){
        for(int k=0;k<m;k++){
            if(b[k]%c[i]==0){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            number++;
            }
    }
    cout<<number;
    return 0;
}
