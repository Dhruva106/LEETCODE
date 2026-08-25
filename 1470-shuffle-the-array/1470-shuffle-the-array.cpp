class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);//takes the first element from the first half
            ans.push_back(nums[i+n]);//takes the first element from the second half
        }
        return ans;
    }
};