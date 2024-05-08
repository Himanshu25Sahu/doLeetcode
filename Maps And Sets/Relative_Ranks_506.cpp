class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>ans=score;
        sort(score.begin(),score.end());
      
        unordered_map<int,string>m;
      
        int n=score.size();
      
        vector<string>finans(n);
        if(n==0) return finans;
        if(n<3){
            if(n==1){
                finans[0]="Gold Medal";
            }
            else{
                int max=ans[0]>ans[1]?ans[0]:ans[1];
                finans[0]=ans[0]==max?"Gold Medal":"Silver Medal";
                finans[1]=ans[1]==max?"Gold Medal":"Silver Medal";
            }
            return finans;
        }
        else{
            m[score[n-1]]="Gold Medal";
            m[score[n-2]]="Silver Medal";
            m[score[n-3]]="Bronze Medal";
            for(int i=0;i<n-3;i++){
                m[score[i]]=to_string(n-i);
            }

        }
        for(int i=0;i<n;i++){
            
            finans[i]=m[ans[i]];
        }
        return finans;
    }
};
