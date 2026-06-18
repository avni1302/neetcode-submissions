class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,s=0,len=INT_MAX;
        for(int r=0;r<nums.size();r++){
            s+=nums[r];
            while(s>=target){
                len=min(len,r-l+1);
                s-=nums[l];
                l++;
            }
        }
        if(len==INT_MAX) return 0;
        return len;
    }
};