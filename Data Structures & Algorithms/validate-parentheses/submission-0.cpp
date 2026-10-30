
class Solution {
public:
    bool isValid(string s) {
        stack<char> pile;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                pile.push(s[i]);
            }

            else {
               
                if (pile.empty()) {
                    return false;
                }
                if ((s[i] == ')' && pile.top() != '(') ||
                    (s[i] == ']' && pile.top() != '[') ||
                    (s[i] == '}' && pile.top() != '{')) {
                    return false;
                }

              
                pile.pop();
            }
        }

       
        return pile.empty();
    }
};
