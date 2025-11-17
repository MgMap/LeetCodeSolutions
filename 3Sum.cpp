class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for(int i = 0; i < nums.size();i++)
        {
            if (nums[i] > 0) break;


            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int left = i + 1;
            int right = nums.size() - 1;

            int target = 0 - nums[i];

            while(left < right)
            {   
                if(target == (nums[left] + nums[right]))
                {
                    result.push_back({nums[i], nums[left], nums[right]});
                    int leftVal = nums[left];
                    int rightVal = nums[right];

                    // Skip duplicates for left
                    while (left < right && nums[left] == leftVal)
                        ++left;
                    // Skip duplicates for right
                    while (left < right && nums[right] == rightVal) 
                        --right;
                }
                else if(target < (nums[left] + nums[right]))
                    right--;
                else
                    left++;
            }
        }
        return result;
    }
};
