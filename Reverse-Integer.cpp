class Solution {
public:
    int reverse(int x) {
        //divide and reconstruct
        queue<int> q;
        while(x > 9 || x < -9)
        {
            int mod = x % 10;
            x = x /10;
            q.push(mod);
        }
        q.push(x%10);
        double i = 0;
       int size = q.size();
        while(!q.empty())
        {
            int j = q.front();
            i += j * pow(10,size-1);
            if (i > INT_MAX || i < INT_MIN) return 0;
            q.pop();
            size--;
        }

        return (int)i;

    }
};