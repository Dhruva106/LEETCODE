class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans(nums.size());
        int evenindex = 0;
        int oddindex = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans[evenindex]=nums[i];
                evenindex+=2;
            }
            else{
                ans[oddindex]=nums[i];
                oddindex+=2;
            }

            }
        
        return ans;
    }
     
};