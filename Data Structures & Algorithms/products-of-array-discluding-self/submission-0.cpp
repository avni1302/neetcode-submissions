class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        long long mul=1;
        int z=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                z++;
                continue;
            }
            mul*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(z>1) ans.push_back(0);
            else if(nums[i]==0) ans.push_back(mul);
            else if(z>0) ans.push_back(0);
            else ans.push_back(mul/nums[i]);
        }
        return ans;
    }
};
