class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
        for(int i=0; i<n-1; i++){
            int mindex=i;
            for(int j=i+1; j<n; j++){
                if(arr[j]<arr[mindex]){
                    mindex=j;
                }
            }
            swap(arr[i],arr[mindex]);
        }
    }
};