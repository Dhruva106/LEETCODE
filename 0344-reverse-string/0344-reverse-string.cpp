class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size()-1;
        for(int left =0;left<s.size();left++){
            if(left>=right){
               break;
            }
            swap(s[left],s[right]);
                right--;

           
        }
        
    }
};