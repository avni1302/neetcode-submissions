class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string ans="";
        for(int i=0;i<path.size();i++){
            string s="";
            while(i<path.size() && path[i]!='/'){
                s+=path[i];
                i++;
            }
            if(s==".."){
                if(!st.empty()) st.pop();}
            else if(s=="." || s=="") continue;
            else st.push(s);
        }
        if(st.empty()) return "/";
        vector<string> a;
        while(!st.empty()){
            a.push_back(st.top());
            st.pop();
        }
        reverse(a.begin(),a.end());
        for(auto d:a)
            ans=ans+"/"+d;
        return ans;
    }
};