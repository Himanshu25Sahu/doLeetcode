class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        sort(happiness.begin(),happiness.end(),greater<int>());
        
        long long maxhap=0;
        int n=happiness.size();
        
        for(int i=0;i<k;i++){
            happiness[i]=happiness[i]-i;
            if(happiness[i]<0){
                break;
            }
            else{
                maxhap+=happiness[i];
            }
        }
        

        return maxhap;
    }
};
