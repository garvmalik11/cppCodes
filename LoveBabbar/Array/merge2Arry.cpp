// leetcode=============================

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j= 0, k=0;
        vector<int> arr = nums1;
        for(int i=0; i<m; i++){
            arr[i] = nums1[i];
        }
        while(i<m && j<n){
            if(arr[i] > nums2[j]){
                nums1[k] = nums2[j];
                k++;
                j++;
            }
            else{
                nums1[k] = arr[i]; 
                i++;
                k++;
            }
        }
        while(i<m){
            nums1[k] = arr[i];
            i++;
            k++;
        }
        while(j<n){
            nums1[k] = nums2[j];
            j++;
            k++;
        }
    }
};