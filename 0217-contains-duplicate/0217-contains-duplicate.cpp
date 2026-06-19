class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> um;
        for(int i: nums){
            um[i]++;
        }

        for(auto i : um){
            if(i.second > 1){
                return true;
            }
        }
        return false;
    }
};