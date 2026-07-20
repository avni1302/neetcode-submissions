class Solution {
public:
    int hours(vector<int>& piles,int k){
        long long t=0;
        for(int p:piles){
            t+=(p+k-1)/k;
        }
        return t;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=*max_element(piles.begin(),piles.end());
        int ans=r;
        while(l<=r){
            int k=l+(r-l)/2;
            if(hours(piles,k)<=h){
                ans=k;
                r=k-1;
            }
            else l=k+1;
        }
        return ans;
    }
};
