class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans , res , f;

               for(int i = 1 ; i <= nums.size() ; i++) {
                   ans.push_back(i);
               }

                  for(int i = 0 ; i < ans.size() ; i++) {
                   res.push_back(ans[i]);
               } 

                  for(int i = 0 ; i < nums.size() ; i++) {
                   res.push_back(nums[i]);
               } 

        map<int , int>mp;

        for(int i = 0 ; i < res.size() ; i++) mp[res[i]]++;

        for(auto&i : mp) {
             if(i.second == 1) f.push_back(i.first);
        }    
       return f;

    }
};
