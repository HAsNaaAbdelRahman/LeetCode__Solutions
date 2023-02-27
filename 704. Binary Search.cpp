class Solution {
public:
    int search(vector<int>& nums, int target) {
       int l = 0 , r = nums.size()-1;
       sort(nums.begin() , nums.end());
       while(l <= r) {
            
            int Mid = l + (r - l) / 2 ;
            if(nums[Mid] == target) return Mid;
            else if(nums[Mid] < target) l++;
            else r--;
       }
       return -1;
    }
};
