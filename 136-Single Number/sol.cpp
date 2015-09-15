class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int register ans = 0;
        for(int i=nums.size()-1; i>=0; i--)
            ans ^= nums[i];
        return ans;
    }
};