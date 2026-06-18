class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }

        if(s.size()>=3){
            auto it=s.rbegin() ;
            advance(it,2);
            return *it;
        }
        else{
            auto it=s.rbegin();
            return *it;
        }
    }
};