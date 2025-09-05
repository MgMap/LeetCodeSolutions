#include <unordered_map>

using namespace std;


//hash_map<nums, index of the nums> 
//we can check if nums exist in the hash if not we will put it there.


class Solution {
public:
    vector<int> twoSum(vector<int>& vec, int target)
    {
        unordered_map<int,int> nums_map;
        vector<int> result;

        for(int i = 0; i < vec.size(); i++)
        {
            int complement = target - vec[i];
            if(nums_map.find(complement) != nums_map.end())
            {
                result.push_back(nums_map[complement]);
                result.push_back(i);
                return result;
            }
            else
            {
                nums_map[vec[i]] = i;
            }
        }

        return result;
    }
   
};