class Solution {
  
public:
  static bool comp(pair<int , int>&a , pair<int , int>&b){
     return (a.second == b.second ? a.first <  b.first : a.second< b.second) ;
}
    vector<int> sortByBits(vector<int>& arr) {
   
    vector<int>res ;

    vector<pair<int , int>> v ;

    for(int i = 0 ; i < arr.size() ; i++) {


        v.push_back({arr[i] , __builtin_popcount(arr[i])});



    }
    sort(v.begin() , v.end() , comp);
        
    for(int i = 0 ; i < v.size() ; i++) {
        res.push_back(v[i].first);

    }

        return res;
    }  
};
