class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evennumbers=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int siuu=0;
            while(num>0){
                 num=num/10;
                 siuu++;
            }
            if(siuu%2==0){
                evennumbers++;
            }
        }
        return evennumbers;
    }
};