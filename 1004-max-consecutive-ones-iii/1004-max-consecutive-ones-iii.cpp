class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0, j=0, count=0, maxlen=0, n=nums.size();

        while(j<n){
                if(nums[j]==0){
                    count++;
                }
                if(count > k){
                    if(nums[i] == 0){
                        count--;
                    }
                    i++;
                }
                int len=j-i+1;
                maxlen=max(maxlen,len);
                j++;
        }
        return maxlen;
    }
};