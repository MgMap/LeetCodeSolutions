

class Solution {
public:
    void BFS(vector<vector<char>>& grid, int r, int c)
    {
        int n = grid.size()-1;
        int m = grid[0].size()-1;

        queue<pair<int,int>> q;
        q.push({r,c});
        grid[r][c] = '0';
        vector<pair<int,int>> dir = {{1,0}, {-1,0}, {0,1}, {0,-1}};

        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for(auto [dx, dy] : dir)
            {
                int newX = x + dx;
                int newY = y + dy;

                if(newX >= 0 && newX <= n && newY >= 0 && newY <=m && grid[newX][newY] == '1')
                {
                    grid[newX][newY] = '0';
                    q.push({newX, newY});
                }
            }
        }
    }

    void DFSre(vector<vector<char>>& grid, int r, int c)
    {
        int n = grid.size()-1;
        int m = grid[0].size() -1;


        if(r < 0 || r > n || c < 0 || c > m || grid[r][c] == '0')
        {
            return;
        }
        grid[r][c] = '0';

        DFSre(grid, r -1, c);
        DFSre(grid, r+1, c);
        DFSre(grid, r, c+1);
        DFSre(grid, r, c-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size()-1;
        int m = grid[0].size()-1;

        int counter = 0;
        for(int r = 0; r <= n; r++)
        {
            for(int c = 0; c <= m; c++)
            {
                if(grid[r][c] == '1')
                {
                    DFSre(grid, r, c);
                    counter++;
                }
            }
        }
        return counter;
    }
};