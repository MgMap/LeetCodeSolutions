class Solution {
public:
    int romanToInt(string s) {
    unordered_map<string, int> roman = {
            {"I", 1}, {"V", 5}, {"X", 10}, {"L", 50},
            {"C", 100}, {"D", 500}, {"M", 1000},
            {"IV", 4}, {"IX", 9}, {"XL", 40}, {"XC", 90},
            {"CD", 400}, {"CM", 900}
        };
        int result = 0;
        for(int i = 0; i < s.size(); i++)
        {
            string sub = s.substr(i,2);
            if(roman.contains(sub))
            {
                result += roman[sub];
                i++;
            }
            else
            {
                result += roman[s.substr(i, 1)];
            }
        }
        return result;
    }
};