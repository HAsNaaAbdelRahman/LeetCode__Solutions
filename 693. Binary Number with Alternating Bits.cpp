class Solution {
public:
    bool hasAlternatingBits(int n) {
           bitset<32>b(n);

         int ans =  __builtin_clz(n) ;

        int ok = 0 ;

      for(int i = 32 - ans - 1 ; i >= 0; i--) {
       if(b[i] != b[i + 1]) {
           ok++;
       }
   }
     return(ok>= (32 - ans));
    }
};
