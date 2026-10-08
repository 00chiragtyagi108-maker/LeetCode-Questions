class Solution {
public:
    string removeOuterParentheses(string s) {  

    string result="";
    int counter=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
        counter++;
            if(counter>1)
                result=result+"(";
        }
        else
        {
            if(s[i]==')'){
                counter--;
                if(counter>0)
                    result=result+")";
                }
            }
        }
        return result;
    }
};