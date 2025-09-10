class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR1,XOR2=0;
        for(int i=0;i<nums.size();i++){
            XOR2=XOR2^nums[i];
            XOR1=XOR1^(i+1);
        }
        // XOR1=XOR1^(nums.size());
        return XOR1^XOR2;
    }
};