class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto a:s){
            if(a=='(' || a=='{' || a=='['){
                st.push(a);
            }
            else if(!st.empty()){
                if(a==')'){
                    if(st.top()!='(') return false;
                    else st.pop();
                }
                else if(a=='}'){
                    if(st.top()!='{') return false;
                    else st.pop();
                }
                else{
                    if(st.top()!='[') return false;
                    else st.pop();
                }
            }
            else return false;
        }
        if(!st.empty()) return false;
        else return true;
    }
};
