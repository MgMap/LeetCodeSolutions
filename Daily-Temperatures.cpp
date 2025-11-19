class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n , 0);
        stack<int> temp;
        // we have to store the indexes not the actual value
        for(int i = 0; i < n; i++)
        {
            while(!temp.empty() && temperatures[i] > temperatures[temp.top()])
            {
                int prev = temp.top();
                temp.pop();
                answer[prev] = i - prev;
            }
            temp.push(i);
        }
        return answer;
    }
};