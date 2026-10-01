class Solution {
public:
    bool isValid(string s) {

        int n = s.size();
        vector<int> arr(n);   
        int top = -1;
        int i = 0;

        while (i < n) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                arr[++top] = s[i];
            }
            else {
                if (top == -1)
                    return false;

                int p = arr[top--];
                
                if ((p == '(' && s[i] == ')') ||
                    (p == '{' && s[i] == '}') ||
                    (p == '[' && s[i] == ']')) {
                    
                }
                else
                    return false;
            }
            i++;
        }
        return top == -1;
    }
};
