class Solution {
public:
    int lengthOfLastWord(string s) {

        //what if there is only one word
        int n = s.size()-1;
        int count = 0;
        while(!isalpha(s[n]))
        {
            n--;
        }

        while( (n >= 0) && s[n] != ' ')
        {
            n--;
            count++;
        }
        return count;
    }
};