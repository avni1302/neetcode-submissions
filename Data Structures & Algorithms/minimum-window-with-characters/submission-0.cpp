class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length(),m=t.length();
        if(n<m) return "";
        string a="";
        unordered_map<char,int> s1,t1;
        for(auto tt:t){
            t1[tt]++;
        }
        int l=0,matched=0,win=INT_MAX,st=0;
        for(int i=0;i<s.length();i++){
            s1[s[i]]++;
            if(t1.count(s[i]) && s1[s[i]]<=t1[s[i]])
                matched++;
            while(matched==m){
                if(i-l+1<win){
                    win=i-l+1;
                    st=l;
                }
                if(t1.count(s[l]) && s1[s[l]]<=t1[s[l]])
                    matched--;
                s1[s[l]]--;
                l++;
            }
        }
        return (win==INT_MAX) ? "":s.substr(st,win);
    }
};
