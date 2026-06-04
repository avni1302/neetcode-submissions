class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int water=0;
        while(i<j){
            int w=(j-i)*min(heights[i],heights[j]);
            if(heights[i]<heights[j]) i++;
            else j--;
            water=max(w,water);
        }
        return water;
    }
};
