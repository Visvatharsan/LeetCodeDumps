class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int x=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                c+=1;
                x=max(x,c);
            }
            else if(nums[i]==0){
                c=0;
            }
        }
        return x;
    }
};