class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int l=0,r=1,len=0;
        m[s[l]]++;
        if(s.length()==1) return 1;
        while(r<s.length()){
            m[s[r]]++;
            while(m[s[r]]>1){
                m[s[l]]--;
                l++;               
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};
