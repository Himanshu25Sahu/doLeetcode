/* ALGORITHM */
// 1) map the roman letters with their corresponding values
// 2) traverse through the string and while traversing: 
// 3) the numerals I,X,C can change the value of the next numeral depending if its present 
//    before the numeral or after. eg:- VI - 6 and IV - 4, similarly MC - 1100 AND CM - 900(1000-100)
// 4) if any of I,C,X encountered then check the next char and handle the case by subtracting the current index value by its next one.
// 5) update the result according to situation 
// 6) end and return 






class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;

        int res=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='I'){
                if(s[i+1]=='V' || s[i+1]=='X'){
                    res+=m[s[i+1]]-m[s[i]];
                    i++;
                }
                else{
                    res+=m[s[i]];
                }
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L' || s[i+1]=='C'){
                    res+=m[s[i+1]]-m[s[i]];
                    i++;
                }
                else{
                    res+=m[s[i]];
                }
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D' || s[i+1]=='M'){
                    res+=m[s[i+1]]-m[s[i]];
                    i++;
                }
                else{
                    res+=m[s[i]];
                }
            }
            else res+=m[s[i]];
        }
        return res;

    }
};
