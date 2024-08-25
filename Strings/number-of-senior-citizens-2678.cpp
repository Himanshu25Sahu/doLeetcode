class Solution {
public:
    int countSeniors(vector<string>& details) {
        int sum = 0;
        for(string str : details) {
            int age = (str[11] - '0') * 10 + (str[12] - '0');
            if(age > 60) {
                sum += 1;
            }
        }
        return sum;
    }
};
