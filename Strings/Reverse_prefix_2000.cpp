//ALGORITHM:-
//1) put i on 0
//2) traverse on the word
//3) if(the character is encountered then swap as given in the code below
//4) end


class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        for(int j=0;j<word.length();j++){
            if(word[j]==ch){
                while(i<=j){
                    char temp=word[i];
                    word[i]=word[j];
                    word[j]=temp;
                    i++;
                    j--;
                }
                break;
            }
            
        }
        return word;
    }
};
