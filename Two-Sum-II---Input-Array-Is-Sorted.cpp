class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;

        vector<int> indexes(2, 0);
        while(left < right)
        {
            int result = numbers[left] + numbers[right];
            if(result > target)
            {
                right--;
            }
            else if(result < target)
            {
                left++;
            }
            else if(result == target)
            {
                indexes[0] = left+1;
                indexes[1] = right+1;
                return indexes;
            }

        }
        return indexes;
    }
};
