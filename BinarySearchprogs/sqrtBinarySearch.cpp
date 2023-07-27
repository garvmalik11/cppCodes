#include<iostream>
using namespace std;



long long int floorSqrt(int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    int ans = 0;
    

    while(s<=e){
        long long int mid = s + (e-s)/2;
        long long int square = mid*mid;

        if(square == n){
            return mid;
        }
        else if(square < n){
            ans = mid;
            s = mid +1;
        }
        else{
            e = mid -1;
        }
    }
    return ans;
}
///////////////type herne not on CPH!!
int main(){
    int n =1000000;
    cout << floorSqrt(n)<<endl;
}
