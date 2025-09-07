
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a = k % (nums.size());
        reverse(nums.begin(),nums.end()-a);
        reverse(nums.end()-a,nums.end());
        reverse(nums.begin(),nums.end());
    }
};