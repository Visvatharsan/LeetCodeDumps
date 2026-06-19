class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        for(int i: nums){
            um[i]++;
        }

        vector<vector<int>> arr(nums.size()+1);
        for(auto it: um){
            arr[it.second].push_back(it.first);
        }

        vector<int> result;
        for(int i=arr.size()-1; i>=0; i--){
            for(int j : arr[i]){
                result.push_back(j);
                if(result.size() == k){
                    return result;
                }
            }
        }
        return {};
    }
};