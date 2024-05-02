//ALGORITHM:
//1) we'll use unordered set to solve this question
//2) algo. is to check whether the current num's negetive exist in set or not
//3) if it doesn't then insert it to set
//4) if exists then:
//5) compare the previous biggest element containing its negetive with the current one
//6) and store the largest between the two in res
//7) return the res and end;



class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>s;
        int res=-1;
        for(int i=0;i<nums.size();i++){
            if(s.find(-nums[i])!=s.end()){//exist
                int num=nums[i]<0?-nums[i]:nums[i];
                res=max(num,res);
            }
            else s.insert(nums[i]);
        }
        return res;
    }
};
