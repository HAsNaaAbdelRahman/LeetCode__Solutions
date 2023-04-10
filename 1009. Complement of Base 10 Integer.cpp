class Solution {
public:
    int bitwiseComplement(int n) {
           if(n == 0) return 1 ;

           bitset<32>b(n);

    int ans = __builtin_clz(n) ;

   for(int i = 32 - ans - 1; i >= 0 ; i--) b.flip(i);
         return b.to_ulong();
    }
};
