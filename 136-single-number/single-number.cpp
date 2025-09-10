class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int XORr=0;
        for(int i=0;i<nums.size();i++){
            XORr=XORr^(nums[i]);
        }
        return XORr;
    }
};