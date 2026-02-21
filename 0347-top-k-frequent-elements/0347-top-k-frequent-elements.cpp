class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }

        priority_queue<pair<int,int>> pq;

        for(auto it: um){
            pq.push({it.second,it.first});
        }

        vector<int> x;
        for(int i=0; i<k; i++){
            x.push_back(pq.top().second);
            pq.pop();
        }

        return x;


    }
};