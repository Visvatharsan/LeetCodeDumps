// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1, r=n;
        while(l<=n){
            int mid=l+(r-l)/2;
            if(isBadVersion(mid)==true && isBadVersion(mid-1)==false){
                return mid;
            }
            else if(isBadVersion(mid)==true && isBadVersion(mid-1)==true){
                r=mid-1;
            }
            else if(isBadVersion(mid)==false && isBadVersion(mid-1)==false){
                l=mid+1;
            }
        }
        return -1;
    }
};