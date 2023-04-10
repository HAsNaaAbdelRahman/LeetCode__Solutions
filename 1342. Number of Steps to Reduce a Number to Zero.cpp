class Solution {
public:
    int numberOfSteps(int num) {
        if(num == 0) return 0 ;
        return __lg(num) + __builtin_popcount(num);
    }
};
