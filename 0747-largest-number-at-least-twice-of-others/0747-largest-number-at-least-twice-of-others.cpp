class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int mi=0;
        for(int i=1; i<n; i++){
            if(nums[i] > nums[mi]){
                mi=i;
            }
        }

        int max = nums[mi];
        for(int i=0;i<n; i++){
            if(i == mi){
                continue;
            }
            if(nums[i]*2 > max){
                return -1;
            }
        }
        return mi;
    }
};