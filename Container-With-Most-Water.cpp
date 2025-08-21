#include <algorithm> // Required for std::max
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int left = 0;
        int right = height.size()-1;
        int max_area = 0;
        while(left < right)
        {
            int width = right - left;
            int height1 = min(height[left], height[right]);
            int area = width * height1;
            max_area = max(max_area, area);

            if(height[left] > height[right])
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return max_area;
    }
};