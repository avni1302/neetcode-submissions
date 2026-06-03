class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int se=0;
        for(int num:s){
            if(s.find(num-1)==s.end()){
                int l=1;
                int cur=num;
                while(s.find(cur+1)!=s.end()){
                    l++;
                    cur++;
                }
                se=max(l,se);
            }
        }
        return se;
    }
};
