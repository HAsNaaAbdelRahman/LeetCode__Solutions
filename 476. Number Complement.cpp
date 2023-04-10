class Solution {
public:
    int findComplement(int num) {

        bitset<32>b(num);

    int ans = __builtin_clz(num) ;

   for(int i = 32 - ans - 1; i >= 0 ; i--) b.flip(i);
        return b.to_ulong();
    }
};
