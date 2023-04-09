class Solution {
public:
    bool isParentheses(char c1 , char c2) {
        if(c1 == '(' && c2 == ')') return true ;
        else if(c1 == '{' && c2 == '}') return true ;
        else if(c1 == '[' && c2 == ']') return true ;
        return false ;
         
    }

    bool isValid(string s) {
        stack<char>sk;
        
        for(int i = 0 ; i < s.size() ; i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                  
                  sk.push(s[i]);
            }else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                      if(sk.empty() || !isParentheses(sk.top() , s[i]) ) {
                            return false ;
                         
                      }else {
                            sk.pop();
                      }
                 
            }
        }
        return sk.empty();
    }
};
