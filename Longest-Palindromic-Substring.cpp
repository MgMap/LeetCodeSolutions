class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int start = 0;
        int end = 0;

        for(int i = 0; i < n ; i++)
        {
            for(int j = 0; j <= 1; j++)
            {
                int left = i;
                int right = i+j;
                while(left >= 0 && right <= n - 1 && s[left] == s[right])
                {
                    left--;
                    right++;
                }
                left++;
                right--;

                if(right - left > end - start)
                {
                    start = left;
                    end = right;
                }
            }
        }
        return s.substr(start, end-start+1);
    }
};