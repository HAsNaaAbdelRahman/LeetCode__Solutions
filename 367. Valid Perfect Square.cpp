class Solution {
public:

    bool isPerfectSquare(long long  num) {

      
        
         long long  l = 1 , r = num;
       
       if(num == 1) return true ;
        
        while(l <= r) {
             
            long long mid  = l + (r - l) /2;

            if(mid * mid == num) {
                 return true ;

            }else if(mid * mid < num){
                 
                 l = mid + 1 ;
            }else {
                 r = mid - 1 ;
            }
        }
        return false ;
    }
};
