class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcandies =0;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>maxcandies){
                maxcandies=candies[i];
            }

        }
        vector<bool>ans;//creating an empty vector that stores true or false value
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=maxcandies){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }

        }
        return ans;
    }
};