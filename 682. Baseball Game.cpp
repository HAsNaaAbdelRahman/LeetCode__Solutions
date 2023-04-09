class Solution {
public:
    int calPoints(vector<string>& v) {
   deque<int>dq;
   int res = 0 ;
   for(int i = 0 ; i < v.size() ; i++) {

               if (v[i] == "C"){
                   if(!dq.empty()) {
                       dq.pop_back();
                   }
               }
               else if (v[i] == "D") {
                   dq.push_back(dq.back() * 2);
               }
             else   if (v[i] == "+") {
                    int sum = 0 ;
                   if(!dq.empty()) {

                         sum += dq[dq.size() - 1] + dq[dq.size() - 2];
                    }
                    dq.push_back(sum); 

       }else {
                 dq.push_back(stoll(v[i]));
             }

   }
   for(int i = 0 ; i < dq.size() ; i++) res += dq[i];
 
   return res;
   }
};
