//aka count primes
class Solution {
public:
    int countPrimes(int n) {
        
        int count = 0;
        vector<bool> arr(n+1,true);
        arr[0] = arr[1]= false;

        for(int i=2; i<n; i++){
            if(arr[i]){
                count ++;
            
            for(int j = 2*i; j<=n; j=j+i){
                arr[j] = 0;
            }
        }
    }
        return count;
    }
};