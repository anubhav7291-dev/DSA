class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int count=0;
        // int lastEle = INT_MIN;
        // int longest =1;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]-1== lastEle){
        //         count++;
        //         lastEle=nums[i];
        //     }
        //     else if(nums[i]!= lastEle){
        //         count =1;
        //         lastEle=nums[i];
        //     }
        // longest = max(count,longest);
        // }
        // return longest;

        if(nums.size()==0) return 0;
        int longest=1;
        int n=nums.size();
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int cnt =1;
                int x = it;
                while(st.find(x+1)!=st.end()){
                    x++;
                    cnt++;
                }
            longest=max(cnt,longest);
            }
            
        }
        return longest;

    }
};