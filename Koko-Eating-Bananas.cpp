class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        //binary search on 1 to maximun
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int mid = 0;
        while(left < right)
        {
            mid = left + (right - left) / 2;
            int hourspent = 0;

            for(int x : piles)
            {
                int each_house = x/mid + (x % mid != 0);
                hourspent += each_house;
            }

            if(hourspent > h)
            {
                left = mid+1;
            }
            else if(hourspent <= h)
            {
                right = mid;
            }
        }
        return right;
    }
};