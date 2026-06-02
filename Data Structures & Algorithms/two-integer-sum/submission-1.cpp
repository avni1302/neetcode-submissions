class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                s=nums[i]+nums[j];
                if(s==target){
                    if(i<j) return {i,j};
                    else return {j,i};
                }
            }
        }
    }
};
