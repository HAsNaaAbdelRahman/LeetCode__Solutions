class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int l = 0 , r = nums.size()-1;
       while(l <= r) {
           int Mid = l + (r - l) / 2 ;
            
            if(nums[Mid] == target) return Mid;
            else if(nums[Mid] < target) l = Mid + 1;
            else r = Mid - 1;
       }
       return lower_bound(nums.begin() , nums.end() , target) - nums.begin() ;
    }
};
