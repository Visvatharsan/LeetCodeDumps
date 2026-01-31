class Solution {
public:
    int climbStairs(int n) {
        int sum=1;
        int prev=1;
        for(int i=2; i<=n; i++){
            int x=sum;
            sum=sum+prev;
            prev=x;
        }
        return sum+1-1;
    }
};