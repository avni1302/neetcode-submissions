class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string a="";
        int n=word1.size(),m=word2.size();
        int s,p;
        if(n<=m){
            s=n;
            p=1;
        }
        else{
            s=m;
            p=0;
        }
        for(int i=0;i<s;i++){
            a+=word1[i];
            a+=word2[i];
        }
        if(p==0)
            for(int i=s;i<n;i++)
                a+=word1[i];
        else
            for(int i=s;i<m;i++)
                a+=word2[i];
        return a;
    }
};