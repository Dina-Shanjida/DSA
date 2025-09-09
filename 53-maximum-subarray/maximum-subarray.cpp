class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum_sum = INT_MIN;
        int current_sum = 0 ;
        for(int val : nums){
            current_sum += val ; 
            maximum_sum = max(maximum_sum , current_sum);
            if(current_sum < 0) current_sum  = 0 ;

        }
        return maximum_sum ;
    }
};