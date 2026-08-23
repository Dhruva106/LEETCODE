class Solution {
public:
    int lengthOfLastWord(string s) {

        int i = s.size() - 1;
        int count = 0;
        //this below line of code skips or jumps through the empty or space strings or charaxters at the end
        while(i >= 0 && s[i] == ' ') {
            i--;
        }
         // this line below first counts and then traverse backwards
        while(i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};