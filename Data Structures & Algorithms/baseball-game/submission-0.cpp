class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int sum=0;
        for(auto c:operations){
            if(c=="+"){
                int x=s.top();
                s.pop();
                int y=s.top();
                s.push(x);
                s.push(x+y);
                sum+=s.top();
            }
            else if(c=="C"){
                sum-=s.top();
                s.pop();
            }
            else if(c=="D"){
                s.push(2*s.top());
                sum+=s.top();
            }
            else{
                s.push(stoi(c));
                sum+=s.top();
            }
        }
        return sum;
    }
};