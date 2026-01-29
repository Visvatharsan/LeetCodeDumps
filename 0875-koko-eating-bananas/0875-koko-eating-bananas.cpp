class Solution {
public:
    bool minchecker(vector<int>& piles, int k, int h){
        int hour=0;
        for(int pile:piles){
            hour+=pile/k;
            if(pile%k != 0)hour++;
            if(hour>h)return false;
        }
        return (hour <= h);
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1, r=*max_element(piles.begin(),piles.end());
        int k=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(minchecker(piles, mid, h)){
                k=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return k;
    }
};