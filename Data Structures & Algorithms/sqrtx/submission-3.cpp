class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        long long l=1,h=x-1;
        while(l<=h){
            long long m=l+(h-l)/2;
            if(m*m==x) return m;
            else if(m*m>x) h=m-1;
            else l=m+1;
        }
        return h;
    }
};