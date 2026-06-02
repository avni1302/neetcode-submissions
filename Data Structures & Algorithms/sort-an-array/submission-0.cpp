class Solution {
public:
    void merge(vector<int> & nums,int l,int m,int h){
        vector<int> temp;
        int left=l;
        int right=m+1;
        while(left<=m && right<=h){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=m){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=h){
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=l;i<=h;i++)
            nums[i]=temp[i-l];
    }
    void ms(vector<int> & nums,int l,int h){
        if(l>=h) return;
        int m=(l+h)/2;
        ms(nums,l,m);
        ms(nums,m+1,h);
        merge(nums,l,m,h);
    }
    vector<int> sortArray(vector<int>& nums) {
        ms(nums,0,nums.size()-1);
        return nums;
    }
};