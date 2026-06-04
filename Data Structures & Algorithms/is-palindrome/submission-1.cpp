class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(!((s[i]>='0' && s[i]<='9') || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))){
                i++;
                continue;
            }
            if(!((s[j]>='0' && s[j]<='9') || (s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z'))){
                j--;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};
