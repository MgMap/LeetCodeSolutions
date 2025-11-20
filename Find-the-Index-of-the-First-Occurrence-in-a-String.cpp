class Solution {
public:
    int strStr(string haystack, string needle) {
        int needle_length = needle.length();
        int hay_length = haystack.length();
        if(needle == haystack)
        {
            return 0;
        }
        if(hay_length < needle_length)
            return -1;

        for(int i = 0; i <= haystack.size()-needle.length(); i++)
        {
            if(haystack.substr(i, needle_length) == needle)
                return i;
        }
        return -1;
    }
};