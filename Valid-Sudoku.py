# keep track of the rows set
# keep track of the col set
# keep track of the square set
# 9 sets of rows
# 9 sets of cols
# 9 sets of 3x3 sqs
# 2 ,2  sq = 0 
# 3, 2  sq = 4
# 3, 3  sq = 5
# 0, 3  sq = 2
# 8, 8 sq = 8
# 6, 6 sq = 8
# (row/3) * 3 + col/3
# sq cal eq = row/3 + col/3 + 1
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows_set = [set() for _ in range(9)]
        cols_set = [set()for _ in range(9)]
        sq_set = [set()for _ in range(9)]
        for i in range(len(board)):
            for j in range(len(board[i])):
                if(board[i][j] == '.'):
                    continue
                cur_sq_index = int((i//3)*3 + j//3)

                if board[i][j] in rows_set[i]:
                    return False
                if board[i][j] in cols_set[j]:
                    return False
                if board[i][j] in sq_set[cur_sq_index]:
                    return False
                rows_set[i].add(board[i][j])
                cols_set[j].add(board[i][j])
                sq_set[cur_sq_index].add(board[i][j])
        
        return True
            
        