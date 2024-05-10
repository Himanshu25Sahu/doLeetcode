class Solution {
public:
    
    vector<int> plusOne(vector<int>& digits) {
        if(digits[digits.size()-1]!=9){
            digits[digits.size()-1]+=1;
            return digits;
        }
        else{
            
            int carry=0;
            reverse(digits.begin(),digits.end());
            for(int i=0;i<digits.size();i++){
                if(digits[i]==9){
                    digits[i]=0;
                    carry=1;
                }
                else{
                    digits[i]+=carry;
                    carry=0;
                    break;
                }
            }
            if(carry){
                digits.push_back(1);

            }
            reverse(digits.begin(),digits.end());
        }
        return digits;
        
    }
};
