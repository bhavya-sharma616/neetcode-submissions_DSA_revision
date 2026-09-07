class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int len=0;int curr;int ans=0;
        unordered_set<int> st(nums.begin(),nums.end());
        for(int num : nums){
            if(st.count(num-1) == 0){
                curr=num;
                len=1;
                while(st.count(curr+1)){
                    curr++;
                    len++;
                }
                ans=max(len,ans);
            }
            
        }
        return ans;
    }
};