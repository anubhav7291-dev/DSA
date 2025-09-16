class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        mpp[0] = 1;
        int prevSum = 0 ;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            prevSum+= nums[i];
            int remove = prevSum - k;
            cnt+= mpp[remove];
            mpp[prevSum]+= 1;
        }
        return cnt;
    }
};