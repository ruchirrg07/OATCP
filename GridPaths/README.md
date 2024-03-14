# GRID PATHS

This repository contains a C++ implementation for counting the number of paths from the top-left corner to the bottom-right corner of a grid while moving only right and down and traversing only through open cells.

## ALGORITHM

Step 1: Initialization

The code creates a 2D vector named dp of size n x n. Each element in this vector represents a cell in a grid.
All elements of dp are initialized to 0, signifying no paths have reached those cells yet.
Since the starting point is at the top-left corner (dp[0][0]), the number of paths reaching there depends on whether it's an open cell (represented by '.') or a blocked cell.
If dp[0][0] is an open cell, it's the only starting point, so its value is set to 1 (one path).
If dp[0][0] is a blocked cell, there are no paths reaching it, so its value remains 0.

Step 2: Base Cases for First Row and Column

This step handles the special cases of cells in the first row (except dp[0][0]) and the first column (except dp[0][0]).
Since there's only one way to reach these cells (either from the cell above for the first column or from the cell to the left for the first row), the code sets the value of dp[i][0] and dp[0][j] (where i and j are greater than 0) based on the cell above or to the left, respectively.
If the cell above or to the left is open ('.'), its dp value represents the number of paths reaching that cell, which is copied to the current cell.
If the cell above or to the left is blocked, there are no paths reaching it, so the current cell's dp value remains 0.

Step 3: Dynamic Programming Loop

The core logic iterates through each cell in the grid starting from dp[1][1] (second row, second column) and ending at dp[n-1][n-1] (bottom-right corner).
For each cell, the code checks if it's an open cell ('.').
If it's blocked, there are no paths reaching it, so the dp value remains 0.
If it's an open cell, the code calculates the number of paths reaching it by considering two possibilities:
Paths reaching the cell from the cell above (dp[i-1][j]).
Paths reaching the cell from the cell to the left (dp[i][j-1]).
The total number of paths reaching the current cell is the sum of these two possibilities. This reflects that you can only move right or down from a given cell, so the number of paths reaching it depends on the paths reaching the cells above and to the left.

Step 4: Return the Result

After iterating through all cells, the code returns the value stored in dp[n-1][n-1]. This cell represents the bottom-right corner of the grid.
The value stored in dp[n-1][n-1] signifies the total number of paths that can reach the bottom-right corner by moving only right and down, considering only open cells in the grid.

Main Function

The main function reads the number of test cases and for each case:
- Reads the grid.
- Calls the countPaths function to compute and print the number of paths from the top-left corner to the bottom-right corner of a grid while moving only right and down and traversing only through open cells.