class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string i:tokens){
            if(i=="+"){
                int a=st.top();
                st.pop();
                a+=st.top();
                st.pop();
                st.push(a);
            }
            else if(i=="-"){
                int a=st.top();
                st.pop();
                a=st.top()-a;
                st.pop();
                st.push(a);
            }
            else if(i=="*"){
                int a=st.top();
                st.pop();
                a*=st.top();
                st.pop();
                st.push(a);
            }
            else if(i=="/"){
                int a=st.top();
                st.pop();
                a=st.top()/a;
                st.pop();
                st.push(a);
            }
            else{
                st.push(stoi(i));
            }
        }
        return st.top();
    }
};
