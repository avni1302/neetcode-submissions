class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        set<int> s;
        int n=nums.size();
        for(int num:nums){
            m[num]++;
            if(m[num]>n/3) s.insert(num);
        }
        vector<int> ans(s.begin(),s.end());
        return ans;
    }
};