//LINK: "https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/"


class Solution {
public:
    //function to reverse the integer
    int reverse(int n){
        int r=0;
        while(n>0){
            r*=10;
            r+=(n%10);
            n/=10;
        }
        return r;
    }

    int countDistinctIntegers(vector<int>& nums) {
        // **As unordered set in cpp discards duplicate values so we'll reverse the integers and push! if the reverse is similar to any number then it's discarded
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            int rev=reverse(nums[i]);
            s.insert(rev);
            
        }
        return s.size();
    }
};
