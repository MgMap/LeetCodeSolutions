/*

plan
two pointers 
point to the left and right
calculate the area

compare left and right
if left is less
move left 
if right is less
move right
*/

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_water = 0;

        int left = 0;
        int right = heights.size()-1;

        while(left < right)
        {
            int height = min(heights[left], heights[right]);
            int width = right - left;
            int area = height * width;

            max_water = max(max_water, area);

            if(heights[left] < heights[right])
                left++;
            else
                right--;
        }
        return max_water;

    }
};
