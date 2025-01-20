class Solution:
    def firstCompleteIndex(self, arr: List[int], mat: List[List[int]]) -> int:
        rows, cols = len(mat), len(mat[0])
        row_paint = [0] * rows
        col_paint = [0] * cols
        position = {mat[i][j]: (i, j) for i in range(rows) for j in range(cols)}

        for idx, num in enumerate(arr):
            i, j = position[num]
            row_paint[i] += 1
            col_paint[j] += 1
            if row_paint[i] == cols or col_paint[j] == rows:
                return idx
        return -1
