class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> myset(nums.begin(), nums.end());
        int max_len = 0;
        for(int x : myset)
        {
            int new_max_len = 0;

            if(!myset.contains(x-1))
            {   
                //start of the sequence
                new_max_len++;
                while(myset.contains(x+new_max_len))
                {
                    new_max_len++;
                }
            }
            max_len = max(max_len, new_max_len);
        }

        return max_len;
    }
};
