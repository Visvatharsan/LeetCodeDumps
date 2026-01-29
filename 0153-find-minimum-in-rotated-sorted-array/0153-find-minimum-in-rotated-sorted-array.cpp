class Solution {
public:
    int findMin(vector<int>& arr) {
        int l=0, r=arr.size()-1;
        int minimum= INT_MAX;
        while(l<r){
            int mid=(l+r)/2;
            if(arr[mid]>arr[r]){
                l=mid+1;
            }
            else{
                r=mid;
            }
        }
        return arr[l];
    }
};