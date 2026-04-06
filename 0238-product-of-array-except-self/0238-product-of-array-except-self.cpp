class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int tproduct = 1,zcount=0;
        bool zero=false;
        for(int i: nums){
            if(i == 0){
                zero=true;
                zcount++;
                continue;
            }
            else{
                tproduct*=i;
            }
        }

        vector<int> ans;
        for(int i: nums){
            if(i == 0){
                --zcount;
                if(zcount > 0){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(tproduct);
                }
                ++zcount;
            }
            else{
                if(zcount > 0){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(tproduct/i);
                }
            }
        }
        return ans;
    }
};