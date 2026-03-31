class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        int q=0;

        for(int x: nums){
            if(x == 0){
                k++;
            }
            else{
                nums[q++]=x;
            }
        }

        while(k>0){
            k--;
            nums[q++]=0;
        }
    }
};