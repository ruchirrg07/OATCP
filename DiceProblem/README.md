# DICE PROBLEM

This repository contains a C++ implementation for computing the number of ways to obtain a desired sum by throwing a dice.

## ALGORITHM

Step 1: Initialization

A vector dp of size n + 1 is created to store the number of ways to reach each sum from 0 to n.
All elements of dp are initialized to 0.
Since there's only one way to reach a sum of 0 (not throwing the die), dp[0] is set to 1.

Step 2: Dynamic Programming Loop

The code iterates through each possible outcome i of throwing the die (1 to 6).
For each outcome i, an inner loop iterates through possible sums j from i to n.

Step 3: Update dp Vector

Within the inner loop, the value of dp[j] (number of ways to reach sum j) is updated.
The update adds the number of ways to reach the sum j - i (achievable by throwing a die with outcome i).
This essentially states that the number of ways to reach j is the sum of ways to reach all smaller sums (j - i) using valid die outcomes.

Step 4: Return the Result

After iterating through all possible outcomes and sums, the code returns the value of dp[n].
dp[n] represents the number of ways to reach the desired target sum n using the outcomes of throwing the dice.

Main Function

The main function reads the number of test cases and for each case:
- Reads the target sum.
- If the sum is negative (not possible), it prints "Not Possible".
- Otherwise, it calls the countWays function to compute and print the number of ways to reach the sum.