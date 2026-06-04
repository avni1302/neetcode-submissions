class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,n=nums.size(),k=1;
        while(i<n-1 && j<=n-1){
            if(nums[i]==nums[j])
                j++;
            else{
                nums[k]=nums[j];
                i++;
                j++;
                k++;
            }
        }
        return k;
    }
};