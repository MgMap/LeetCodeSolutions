// constraints linear runtime, constant extra space
//
// would frequecy map work or overkill
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            x ^= nums[i];
        }
        return x;
    }
};