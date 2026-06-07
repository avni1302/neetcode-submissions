class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),m=200,a=0;
        for(int i=0;i<n;i++){
            m=min(m,prices[i]);
            int maxp=prices[i]-m;
            a=max(maxp,a);
        }
        return a;
    }
};
