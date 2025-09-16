class Solution {
//binary power to avoid TLE
public:
    double myPow(double x, int n) {
        long n_ = n ;
        if(n < 0){
            n_ = -n_ ;
            x = 1 / x;
        }
        double ans = 1 ;
        while(n_ > 0){
            if(n_ % 2){
                ans = ans * x ;
            }
            x *= x ;
            n_ /= 2 ;
        }

        return ans ;
    }
};