/*
base case only one number: 1 way
                        : two number with 0 as starting number 0 way
            two number being greater than 26: only 1 way
            two number less than 26: 2 ways

*/
class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        if(s[0] == '0')
        {
            return 0;
        }
        if(s.length() == 1)
        {
            return 1;
        }
       
        vector<int> ways(n+1);
        ways[0] = 1;
        ways[1] = 1;

       for (int i = 2; i <= n; ++i) {
            // one-digit decode (non-zero)
            if (s[i-1] != '0')
                ways[i] += ways[i-1];

            // two-digit decode (10..26)
            int two = (s[i-2] - '0') * 10 + (s[i-1] - '0');
            if (two >= 10 && two <= 26)
                ways[i] += ways[i-2];
        }
        return ways[n];


    }
};