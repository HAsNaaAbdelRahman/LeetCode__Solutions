class Solution {
public:
    bool isPalindrome(string s) {
        bool isValid = true ;
        string a="" ;
        transform(s.begin() , s.end() , s.begin() , ::tolower);
            string s1 = "abcdefghijklmnopqrstuvwxyz0123456789";
            string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
     for (int i = 0; i < s.length(); i++) {
    if(s1.find(s[i]) != string::npos ||
       s2.find(s[i]) != string::npos)
    {
      a += s[i];
    }
  }
             string t = a ;
             reverse(t.begin() , t.end());

             return t == a;
        
       
    }
};
