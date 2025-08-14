class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int ans = 0;
        int current = 0;

        for(int i = 1 ; i < n; i++)
        {
            if(colors[i] == colors[current])
            {
                if(neededTime[i] < neededTime[current])
                {
                    ans += neededTime[i];
                }
                else
                {
                    ans += neededTime[current];
                    current = i;
                }
            }
            else
            {
                current = i;
            }
        }
        return ans;
    }
};