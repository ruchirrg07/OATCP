#include <bits/stdc++.h>
using namespace std;

int countWays(int n) {
    vector<int>dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= 6; ++i) {
        for (int j = i; j <= n; ++j) {
            dp[j] += dp[j-i];
        }
    }
    return dp[n];
}

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile.is_open()) {
        cout << "Error opening input file." << endl;
        return 1;
    }

    if (!outputFile.is_open()) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    int t;
    inputFile >> t;
    while (t--) {
        int targetSum;
        inputFile >> targetSum;
        if (targetSum < 0) {
            outputFile << "Not Possible" << endl;
        } else {
            outputFile << countWays(targetSum) << endl;
        }
    }

    inputFile.close();
    outputFile.close();

    return 0;
}