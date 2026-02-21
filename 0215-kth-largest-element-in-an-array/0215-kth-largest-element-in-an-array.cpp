class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int, vector<int>,greater<int>> pq;
        for(auto &num:nums){
            if(k>0){
                pq.push(num);
                k--;
            }
            else{
                if(pq.top()<num){
                    pq.pop();
                    pq.push(num);
                }
            }
        }
        return pq.top();
    }
};