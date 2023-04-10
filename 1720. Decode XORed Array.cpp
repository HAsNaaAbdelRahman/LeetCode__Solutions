class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector <int> arr = {first};
        
        int ans = first ;

            for(int i = 0 ; i < encoded.size(); i++) {

            ans ^=  encoded[i] ;

            arr.push_back(ans);


        }

        return arr;
    }
};
