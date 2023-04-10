class Solution {
  
public:
  static bool comp(int a ,int b){
    int fr = __builtin_popcount(a) , sc = __builtin_popcount(b);
     return (fr == sc ? a < b : fr < sc) ;
}
    vector<int> sortByBits(vector<int>& arr) {



    
         sort(arr.begin() , arr.end() , comp);
     

        return arr;
    }  
};
