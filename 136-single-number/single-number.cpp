class Solution {

    //bitwise xor all element to cancel out duplicates and keeping the unique value
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0 ;
        for(int val : nums){
            ans ^= val;
        }
        return ans;
    }
};