class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        for(int i=0;i<position.size();i++){
            v.push_back({position[i],speed[i]});
        }
        sort(v.rbegin(),v.rend());
        int f=0;
        double a=0;
        for(int i=0;i<position.size();i++){
            double t=(double)(target-v[i].first)/v[i].second;
            if(t<=a) continue;
            else{
                f++;
                a=t;
            }
        }
        return f;
    }
};
